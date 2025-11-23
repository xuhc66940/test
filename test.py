#class Person:
#    name = 'wyl'
#    height = '170cm'
#    weight = '65kg'
#    def run(self):
#        print('run方法中的self：',self)
#        print('人类会跑步')
#pe = Person()
#print(pe)
#pe.run()
# class Person:  #这是类
#     name = 'wyl'
#     sex = '男'
#     def introduce(self):
#         print('我是实例方法')
#         print(f'{self.name}的年龄：{self.age}')
# pe = Person()  #这是实例化对象
# pe.age = 19
# pe.sex = '女'
# print(pe.sex)
# print(Person.name)
# pe.introduce()
# pe2 = Person()  #这也是实例化对象
# print(pe2.sex)
# class test():
#     def __init__(self):
#         print('这是__init__()函数')
#
# te = test()
# class Person():
#     def __init__(self,name,age,height,sex):
#         self.name = name   # 这是实例属性
#         self.age = age
#         self.height = height
#         self.sex = sex
#     def play(self):
#         print(f'{self.name}在玩明日方舟')
#     def introduce(self):
#         print(f'{self.name}的年龄是{self.age},身高是{self.height},性别是{self.sex}')
# pe = Person('wyl',26,'170cm','男')     #实例化对象
# pe.play()         #实例化对象
# pe.introduce()    #实例化对象
#
# pe2 = Person('kq',30,'163cm','女')
# pe2.play()
# pe2.introduce()
# pe3 = Person('wmr',5,'140cm','女')
# pe3.introduce()
# print('wyl和kq通过玩明日方舟认识，后结婚，有了wmr')
# print('以上的内容都是我自己的臆想，也是幻想，更是梦想')
# class Person():
#     def A(self):
#         print('一个正常的人')-
#     def B(self):
#         print('他有一个病娇的妻子,还是一个千金')
# class Boy(Person):
#     def A(self):
#         print('被一个病娇强制爱')
#     def B(self):
#         print('一天要做三次')
# class Girl(Person):
#     def A(self):
#         print('也是一个病娇，还是骨科')
# boy = Boy()
# boy.A()
# boy.B()
# class Animal:
#     def walk(self):
#         print('我会走路')
# class Dog(Animal):
#     name = '小黑'
#     def bite(self):
#         print('我会咬人')
#     pass
# class Person(object):
#     @staticmethod
#     def study():
#         print('人类会学习')
# Person.study()
# pe = Person()
# pe.study()
# class Person(object):
#     name = 'bingbing'
#     @classmethod
#     def sleep(cls):
#         print('cls',cls)
#         print('人类会睡觉')
#         print(cls.name)
# print(Person)
# Person.sleep()
# class Person(object):
#     name = '小明'
#     def __init__(self):
#         self.age = 19
# #     def play(self):
# #         print(f'{Person.name}在玩游戏')
# #         print(self.age)
# # pe = Person()
# # pe.play()
#     @classmethod
#     def introduce(cls):
#         print(cls.name)
#         print(cls.name)
# pe = Person()
# pe.introduce()
# class Test(object):
#     def __init__(self):
#         print('这是__init__()')
#     def __new__(cls, *args, **kwargs):
#         print('我是__new__()')
#         print(cls)
#         res = super().__new__(cls)
#         return res
# te = Test()
# print('te:',te)
# class Person(object):
#     def __new__(cls, *args, **kwargs):
#         print('这是new方法')
#         print('返回值：',super().__new__(cls))
#         return super().__new__(cls)
#     def __init__(self,name):
#         self.name = name
#         print('名字是：',self.name)
# pe = Person('wyl')
# print(pe)
# pe2 = Person('kq')
# print(pe)
# class Singleton(object):
#     obj = None
#     def __new__(cls, *args, **kwargs):
#         print('这是new方法')
#         if cls.obj == None:
#             cls.obj = super().__new__(cls)
#         return cls.obj
#     def __init__(self):
#         print('我是__init__')
# s = Singleton()
# print(s)
# s2 = Singleton()
# print(s2)
# s3 = Singleton()
# print(s3)
# class C:
#     def __str__(self):
#         return
# c = C()
# print(c)
# def funa():
#     print('aaa')
# funa()
# print(callable(funa))
# class A:
#     def __call__(self, *args, **kwargs):
#         print('这是call')
# a = A()
# a()
# a2 = A()
# a2()
# print(callable(a))
# class A(object):
#     pass
# a1 = A()
# print(a1)
# a2 = A()
# print(a2)
# f = open('test')
#
# # print(f.readline())
# # print(f.readline())
# for i in f:
#       print(i)
#       text = f.readline()
#       if not text:
#             break
# f.close()
# f = open('test')
# text =f.readlines()
# #print(text)
# #print(type(text))
# for i in text:
#     print(i)
# f.close()
# file = open('test01','w')
# #print(file.read())
# file.write('bingbing,susu,ziyi')
# file.close
# f = open('test','w+')
# #print(f.read())
# f.write('wyl,ke,shenghaizi')
# print(f.read())
# f.close()
# f = open('test','a')
# f.write('\nhello')
# f.close()
# f = open('test')
# print(f.read())
# f.close()
# f = open('test','w+')
# f.write("Hello phthon!")
# pos = f.tell()
# print('文件当前指针所在位置：',pos)
# f.seek(0,0)
# #print(pos)
# pos2 = f.tell()
# print('移动后所在位置：',pos2)
# print(f.read())
# f.close()
# f = open('test','w+')
# f.write("Hello python!")
# print("光标位置：",f.tell())
# f.seek(0,0)
# print(f.tell())
# print(f.read())
# f.close()
# with open('test','w') as f:
#     f.write('emmmmmmmmmmm.....')
# with open('test','w',encoding='utf-8' ) as f:
#     f.write("kq23岁")
# with open('test',encoding='utf-8') as f:
#     print(f.read())
# with open("C:\\Users\\wangy\\Desktop\\新建文件夹\\图片.jpg",'rb') as file:
#     img = file.read()
#     print(img)
# with open("G:\\code\\图片.jpg",'wb') as f:
#     f.write(img)
# import os
# # os.rename('test','kq')
# # os.remove('kq')
# print(os.lis
# from collections import Iterable
# from collections.abc import Iterable
# print(isinstance('123',(str,dict)))
# li = {1,2,3,4,5}
# li2 = li.__iter__()
# # print(li2)
# # print(li2.__next__())
# # print(li2.__next__())
# # print(li2.__next__())
# # print(li2.__next__())
# # print(li2.__next__())
# # print(next(li2))
# # print(next(li2))
# # print(next(li2))
# # print(next(li2))
# # print(next(li2))
# # print(next(li2))
# print(dir(li))
# from collections.abc import Iterable,Iterator
# name = "bingbing"
# print(dir(name))
# print(isinstance(name,Iterable))
# print(isinstance(name,Iterator))
# name2 = iter(name)
# print(dir(name2))
# print(isinstance(name2,Iterable))
# print(isinstance(name2,Iterator))
# class test(object):
#     def __init__(self):
#         self.num = 1
#     def funa(self):
#         print(self.num)
#         self.num += 1
#
# te = test()
# print(te)
# for i in range(5):
#     te.funa()
# for i in te:
#     print(i)
class MyIterator(object):
    def __init__(self):
        self.num = 1
    def __iter__(self):
        self.num = 0
        return self
    def __next__(self):
        if self.num == 10:
            raise StopIteration("终止迭代，数据已经被取完")
        self.num += 1
        return self.num
mi = MyIterator()
print(mi)
print(next(mi))
for i in mi:
    print(i)

