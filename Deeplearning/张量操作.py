import torch
import numpy as np
X=torch.randn(5,3)
print(X.shape)
print(X.dtype)
print(X.device)
Y=torch.tensor([[1,2,3,4,5],[6,7,8,9,10],[11,12,13,14,15]])
Y=Y.reshape(5,3)
#加减乘除
Z=torch.add(X,Y)
print(Z)
Z=torch.sub(X,Y)
print(Z)
Z=torch.mul(X,Y)
print(Z)
Z=torch.div(X,Y)
print(Z)
#张量转numpy
tensor=torch.tensor([1,2,3])
numpy=tensor.numpy()
print(numpy)
#转回
tensor2=torch.from_numpy(numpy)
print(tensor2)
#将张量放到cuda上
if torch.cuda.is_available():
    device=torch.device("cuda")
    tensor3=tensor2.to(device)
    print(tensor3)