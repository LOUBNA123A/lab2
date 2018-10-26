void hash1::chercherItem(std::string nom){
int index=Hash(nom);
if (HashTable[index]->nom==nom){
std::cout << "l'item existe"<<std::endl;
}
else{
item* ptr=HashTable[index];
int a=0;
while(ptr->next!=NULL){
ptr=ptr->next;
if(ptr->nom==nom){
std::cout << "the item exist"<<std::endl;
a=1;
}
}
if(a==0){
std::cout << "the item does not exist"<<std::endl;
}
}
}

