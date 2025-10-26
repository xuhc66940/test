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
class test():
    def __init__(self):
        print('这是__init__()函数')

te = test()
class Person():
    def __init__(self,name,age,height,sex):
        self.name = name   # 这是实例属性
        self.age = age
        self.height = height
        self.sex = sex
    def play(self):
        print(f'{self.name}在玩明日方舟')
    def introduce(self):
        print(f'{self.name}的年龄是{self.age},身高是{self.height},性别是{self.sex}')
pe = Person('wyl',26,'170cm','男')     #实例化对象
pe.play()         #实例化对象
pe.introduce()    #实例化对象

pe2 = Person('kq',30,'163cm','女')
pe2.play()
pe2.introduce()
pe3 = Person('wmr',5,'140cm','女')
pe3.introduce()
print('wyl和kq通过玩明日方舟认识，后结婚，有了wmr')
print('以上的内容都是我自己的臆想，也是幻想，更是梦想')

