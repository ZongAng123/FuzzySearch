//
//  DataHelper.h
//  SearchTest
//
//  Created by 纵昂 on 2020/7/23.
//  Copyright © 2020 https://github.com/ZongAng123. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DataHelper : NSObject
// 获取排序后的通讯录列表
+ (NSMutableArray *) getContactListDataBy:(NSMutableArray *)array;
// 获取分区数(索引列表)
//+ (NSMutableArray *) getContactListSectionBy:(NSMutableArray *)array;

@end

NS_ASSUME_NONNULL_END
