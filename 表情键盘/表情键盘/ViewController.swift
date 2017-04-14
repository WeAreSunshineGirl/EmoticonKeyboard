//
//  ViewController.swift
//  表情键盘
//
//  Created by user on 17/4/5.
//  Copyright © 2017年 user. All rights reserved.
//

import UIKit

class ViewController: UIViewController {

    
    //文本视图
    @IBOutlet weak var textView: UITextView!
    //表情输入视图
    lazy var emoticonView:STEmoticonInputView = STEmoticonInputView.inputView {[weak self] (emoticon) in
        print(emoticon)
        
        self?.insertEmoticon(emoticon)
    }
    
    
    @IBAction func show(sender: AnyObject) {
        
        print(emoticonText)
    }
    
    /// 计算型属性
    /// 返回TextView 对应的纯文本字符串[将属性图片转换成文字]
    var emoticonText:String{
        
        // 1 获取textView 的属性文本
        guard let attrStr = textView.attributedText else{
            return ""
        }
        
        // 2 需要获得属性文本中的图片[附件 Attachment]
        /*
         遍历的范围
         选项[]
         闭包
         
         */
        var result = String()
        attrStr.enumerateAttributesInRange(NSRange(location: 0,length: attrStr.length), options: []) { (dict, range, _) in
//             "NSAttachment": <NSTextAttachment: 0x7f8123b71680>
//            print(dict)
//            print(range)
            //如果字典中包含 NSAttachment 'key' 说明是图片 否则是文本
            //下一个目标 从attachment 中能够获得 chs 就可以了
            if let attachment = dict["NSAttachment"] as? STEmoticonAttachment{
                print("图片\(attachment)")
                result += attachment.chs ?? ""
            }else{
                let subStr = (attrStr.string as NSString).substringWithRange(range)
                
                result += subStr
            }
        
        }
        
//        print(result)
         return result
    }
    /**
     向文本视图插入表情符号【图文混排】
     
     - parameter em: 选中的表情符号 nil 表示删除
     */
    func insertEmoticon(em:STEmoticon?){
        
        // 1  em ==nil 是删除按钮
        guard let em = em else{
            
            //em 为nil 时 删除文本
            textView.deleteBackward()
            
            return
        }
        // 2 emoji 是字符串
        if let emoji = em.emoji,textRange = textView.selectedTextRange {
            
            //UITextRange 仅用在此处
            textView.replaceRange(textRange, withText: emoji)
            return
        }
        
        //代码执行到此 都是图片表情
        
        //0 获取表情中的图像属性文本
        //所有的排版系统中 几乎都有一个共同的特点 插入字符的显示 跟随前一个字符的属性 但是本身没有 ‘属性’
       let imageText = em.imageText(textView.font!)
        
        /*  写在 imageText(textView.font!)此方法中
//        let imageText = NSMutableAttributedString(attributedString: em.imageText(textView.font!))
        //设置图像文字的属性
//        imageText.addAttributes([NSFontAttributeName:textView.font!], range: NSRange(location: 0, length: 1))
        */
        
        // 1> 获取当前 textView的属性文本 =》 可变的
        let attrStrM = NSMutableAttributedString(attributedString: textView.attributedText)
        // 2> 将图像的属性文本插入到当前的光标位置
        attrStrM.replaceCharactersInRange(textView.selectedRange, withAttributedString: imageText)
        
        // 3>重新设置属性文本
        //  记录光标位置
        let range = textView.selectedRange
        //设置文本
        textView.attributedText = attrStrM
        
        //恢复光标位置 length是选中字符的长度 插入文本之后 应该为 0
        textView.selectedRange = NSRange(location: range.location + 1, length: 0)
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        
        //设置输入视图 - 视图刚刚加载 还没有显示 系统默认的键盘还没有生效
        // 可以不刷新输入视图
        textView.inputView = emoticonView
        
        textView.reloadInputViews()
        
    }

    override func viewDidAppear(animated: Bool) {
        super.viewDidAppear(animated)
        
        textView.becomeFirstResponder()
    }


}

