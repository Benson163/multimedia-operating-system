#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <ctime> 
#include <Windows.h>

using namespace std;

string acc;
string password;
string cho;
string TP;
int locate=0;
string item[15]{"��M","�ѥؼv���M","�������j��","���","�]�ɮ�","�@������","���M","����","�L����M","�@��","�k�T","����","HP�Ĥ�","MP�Ĥ�","�t��"};
int bg[17]{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,0};       //�˳�
string obj[5]{"���K��","���b","�Ǫ����","���Y","��"};
int ob[5]{0,0,0,0,0};                                //���� 
string job[3]{"�C�h","�k�v","����"};                 //¾�~ 
//int jj[3]{1,2,3};                                    //¾�~ID 
string sk[6]{"�v��","����","�y�P�B","���t�ìP�Ϯg�O�q","�a�ɯ���","�ּu��"};
int skt[6]{0,0,0,0,0,0};
string uid;
int ATK=0,MAG=0,DEF=0,AGI=0,HP=0,MP=0;               //��O�� 
//int ab[6]{};
int p1[6]{40,0,50,25,200,50};                        //�C�h
int p2[6]{0,40,25,30,100,200};                       //�k�v 
int p3[6]{20,20,35,50,180,100};                      //���� 
string ability[6]{"ATK","MAG","DEF","AGI","HP","MP"}; 
int ab[6]{0,0,0,0,0,0};
int hp,mp;                                           //�ܰ� 
int Lv=0;
int WLv[12]{0,0,0,0,0,0,0,0,0,0,0,0};
int exp=0;
int money=10000;                                     //�� 
//int gold;
int sp=0;                                             
string mon[3]{"�v�ܩi","�b�~�H","�����L"};
string skb[6]{"�v�٧ޯ��","�����ޯ��","�y�P�B�ޯ��","���t�ìP�Ϯg�O�q�ޯ��","�a�ɯ����ޯ��","�ּu���ޯ��"};
int sktb[6]{0,0,0,0,0,0};
int monip0[6]{10,0,0,5,10,0};
int monip1[6]{20,0,10,4,30,0};
int monip2[6]{15,0,5,8,15,0};
//int monlv;
string hand;
string body;


int dig(){      //�a�U�� 
	dd:
	int d=rand()%3+1;
	srand(time(NULL));
	cout << "|                                                 1.����                                                  |\n";
	cout << "|                                                 2.���}                                                  |\n";
	cin >> cho;
	if(cho=="1"){
		cout << "������\n";
		cout << ".\n";
		_sleep(500);
		cout << "..\n";
		_sleep(500);
		cout << "...\n";
		_sleep(500);
		cout << "������o" << obj[0] << "x" << d << endl;
		_sleep(2000);
		ob[0]=ob[0]+d;
		goto dd;
	}
	else if(cho=="2"){
		return 1;
	}
	else{
		cout << "ERROR\n";
		goto dd;
		
	}
}
int tree(){     //��� 
	tt:
	int t=rand()%3+1;
	srand(time(NULL));
	cout << "|                                                 1.���                                                  |\n";
	cout << "|                                                 2.���}                                                  |\n";
	cin >> cho;
	if(cho=="1"){
		cout << "�ɬ夤\n";
		cout << ".\n";
		_sleep(500);
		cout << "..\n";
		_sleep(500);
		cout << "...\n";
		_sleep(500);
		cout << "������o" << obj[3] << "x" << t << endl;
		_sleep(2000);
		ob[3]=ob[3]+t;
		goto tt;
	}
	else if(cho=="2"){
		return 1;
	}
	else{
		cout << "ERROR\n";
		goto tt;
	}
}
int fishing(){  //���� 
	fff:
	srand(time(NULL));
	int ff=rand()%3+1;
	cout << "|                                                 1.����                                                    |\n";
	cout << "|                                                 2.�h�X                                                    |\n";
	cin >> cho;
	if(cho=="1"){
		cout << "������\n";
		cout << ".\n";
		_sleep(500);
		cout << "..\n";
		_sleep(500);
		cout << "...\n";
		_sleep(500);
		cout << "������o" << obj[4] << "x" << ff << endl;
		_sleep(2000);
		ob[4]=ob[4]+ff;
		goto fff;
	}
	else if(cho=="2"){
		return 1;
	}
	else{
		cout << "ERROR\n";
		goto fff;
	}
}
int bmarket(){  //�¥� 
	bmk:
	system("cls");
	cout << "�п�ܱ�������ءG\n";
	cout << " \n";
	cout << "0." << skb[0] << "�G" << "��x50" << "\n";
	cout << " \n";
	cout << "1." << skb[1] << "�G" << "��x100" << "\n";
	cout << " \n";
	cout << "2." << skb[2] << "�G" << "��x50" << "\n";
	cout << " \n";
	cout << "3." << skb[3] << "�G" << "��x100" << "\n";
	cout << " \n";
	cout << "4." << skb[4] << "�G" << "��x50" << "\n";
	cout << " \n";                                                            
	cout << "5." << skb[5] << "�G" << "��x100" << "\n";
	cout << " \n";
	cout << "6.���}\n";
	cin >> cho;
	if(cho=="6"){
		return 1;
	}
	else if(cho=="0"){
		if(ob[4]>=50){
			cout << "������\\n";
			cout << "��o�F�G" << skb[0] << "x1\n";
			ob[4]=ob[4]-50;
			sktb[0]=sktb[0]+1;
			cout << "�� �Ѿl�G" << ob[4] << endl;
			_sleep(2000);
			goto bmk;
		}
		else if(ob[4]<50){
			cout << "�������\n";
			cout << "����w�X����\n";
			_sleep(2000);
			goto bmk;
		}
	}
	else if(cho=="1"){
		if(ob[4]>=100){
			cout << "������\\n";
			cout << "��o�F�G" << skb[1] << "x1\n";
			ob[4]=ob[4]-100;
			sktb[1]=sktb[1]+1;
			cout << "�� �Ѿl�G" << ob[4] << endl;
			_sleep(2000);
			goto bmk;
		}
		else if(ob[4]<100){
			cout << "�������\n";
			cout << "����w�X����\n";
			_sleep(2000);
			goto bmk;
		}
	}
	else if(cho=="2"){
		if(ob[4]>=50){
			cout << "������\\n";
			cout << "��o�F�G" << skb[2] << "x1\n";
			ob[4]=ob[4]-50;
			sktb[2]=sktb[2]+1;
			cout << "�� �Ѿl�G" << ob[4] << endl;
			_sleep(2000);
			goto bmk; 
		}
		else if(ob[4]<50){
			cout << "�������\n";
			cout << "����w�X����\n";
			_sleep(2000);
			goto bmk;
		}
	}
	else if(cho=="3"){
		if(ob[4]>=100){
			cout << "������\\n";
			cout << "��o�F�G" << skb[3] << "x1\n";
			ob[4]=ob[4]-100;
			sktb[3]=sktb[3]+1;
			cout << "�� �Ѿl�G" << ob[4] << endl;
			_sleep(2000);
			goto bmk;
		}
		else if(ob[4]<100){
			cout << "�������\n";
			cout << "����w�X����\n";
			_sleep(2000);
			goto bmk;
		}
	}
	else if(cho=="4"){
		if(ob[4]>=50){
			cout << "������\\n";
			cout << "��o�F�G" << skb[4] << "x1\n";
			ob[4]=ob[4]-50;
			sktb[4]=sktb[4]+1;
			cout << "�� �Ѿl�G" << ob[4] << endl;
			_sleep(2000);
			goto bmk; 
		}
		else if(ob[4]<50){
			cout << "�������\n";
			cout << "����w�X����\n";
			_sleep(2000);
			goto bmk;
		}
	}
	else if(cho=="5"){
		if(ob[4]>=100){
			cout << "������\\n";
			cout << "��o�F�G" << skb[5] << "x1\n";
			ob[4]=ob[4]-100;
			sktb[5]=sktb[5]+1;
			cout << "�� �Ѿl�G" << ob[4] << endl;
			_sleep(2000);
			goto bmk;
		}
		else if(ob[4]<100){
			cout << "�������\n";
			cout << "����w�X����\n";
			_sleep(2000);
			goto bmk;
		}
	}
	else {
		cout << "ERROR\n";
		goto bmk;
	}
}
int rank(){    //���� 
	int eexp;
	srand(time(NULL));
	ex:
	int ee=rand()%3;
	eexp=Lv*5+ee+1;
	cout << "�ثe�֦��g��ȡG" << exp << endl;
	cout << "�����ɯũһݸg��ȡG" << eexp << endl;
	cout << "1.�ɯ�\n";
	cout << "0.���}\n";
	cout << " \n";
	cin >> cho;
	if(cho=="1"){
		if(exp>=eexp){
			cout << "���Ŵ���\n";
			_sleep(1000);
			sp=sp+10;
			Lv=Lv+1;
			exp=exp-eexp;
			cout << "Lv�G" << Lv-1 << "->" << Lv << endl ; 
			_sleep(1000);
			cout << "��o10�ISP\n";
			_sleep(1000);
			cout << "�Ѿl�g��ȡG" << exp << endl;
			_sleep(3000);
			goto ex;
		}
		else if(exp<eexp){
			cout << "�g��Ȥ���\n";
			_sleep(2500);
			goto ex;
		}
	}
	else if(cho=="0"){
	 	return 1;
	}
	else{
		cout << "ERROR\n";
		goto ex;
	}
}
int att(){     //�ѽ� 
	ski:
	cout << "��O�[�I�G" <<  "\n";
	cout << " \n";
	cout << "�ثe����sp�G" << sp << "\n";
	cout << " \n";
	cout << "0." << ability[0] << "�G" << ab[0] << "\n";
	cout << " \n";
	cout << "1." << ability[1] << "�G" << ab[1] << "\n";
	cout << " \n";
	cout << "2." << ability[2] << "�G" << ab[2] << "\n";
	cout << " \n";
	cout << "3." << ability[3] << "�G" << ab[3] << "\n";
	cout << " \n";
	cout << "4." << ability[4] << " �G" << ab[4] << "\n";
	cout << " \n";                                                            
	cout << "5." << ability[5] << " �G" << ab[5] << "\n";
	cout << " \n";
	cout << "6.���}\n";
	cout << " \n";
	cin >> cho;	
	if(cho=="0"){
		if(sp>0){
			cout << ability[0] << "�G" << ab[0] << " -> " << ab[0]+1 ;
			cout << "�[�I���\\n"; 
			ab[0]=ab[0]+1;
			goto ski;
		}
		else {
			cout << "�ѽ��I����" << endl;
			cout << "�L�k�[�I" << endl;
			goto ski;
		} 	
	}
	else if(cho=="1"){
		if(sp>0){
			cout << ability[1] << "�G" << ab[1] << " -> " << ab[1]+1 ;
			cout << "�[�I���\\n"; 
			ab[1]=ab[1]+1;
			goto ski;
		}
		else {
			cout << "�ѽ��I����" << endl;
			cout << "�L�k�[�I" << endl;
			goto ski;
		} 	
	}
	else if(cho=="2"){
		if(sp>0){
			cout << ability[2] << "�G" << ab[2] << " -> " << ab[2]+1 ;
			cout << "�[�I���\\n"; 
			ab[2]=ab[2]+1;
			goto ski;
		}
		else {
			cout << "�ѽ��I����" << endl;
			cout << "�L�k�[�I" << endl;
			goto ski;
		} 	
	}
	else if(cho=="3"){
		if(sp>0){
			cout << ability[3] << "�G" << ab[3] << " -> " << ab[3]+1 ;
			cout << "�[�I���\\n"; 
			ab[3]=ab[3]+1;
			goto ski;
		}
		else {
			cout << "�ѽ��I����" << endl;
			cout << "�L�k�[�I" << endl;
			goto ski;
		} 	
	}
	else if(cho=="4"){
		if(sp>0){
			cout << ability[4] << "�G" << ab[4] << " -> " << ab[4]+1 ;
			cout << "�[�I���\\n"; 
			ab[4]=ab[4]+1;
			goto ski;
		}
		else {
			cout << "�ѽ��I����" << endl;
			cout << "�L�k�[�I" << endl;
			goto ski;
		} 	
	}
	else if(cho=="5"){
		if(sp>0){
			cout << ability[5] << "�G" << ab[5] << " -> " << ab[5]+1 ;
			cout << "�[�I���\\n"; 
			ab[5]=ab[5]+1;
			goto ski;
		}
		else {
			cout << "�ѽ��I����" << endl;
			cout << "�L�k�[�I" << endl;
			goto ski;
		} 	
	}
	else if(cho=="6"){
		return 1;
	} 
	else{
		cout << "ERROR\n";
		goto ski;
	}
}
int skill(){   //�ޯ� 
	si:
	cout << "�п�ܱ��ǲߧޯ�G\n";
	cout << "0." << sk[0] << endl;
	cout << "1." << sk[1] << endl;
	cout << "2." << sk[2] << endl;
	cout << "3." << sk[3] << endl;
	cout << "4." << sk[4] << endl;
	cout << "5." << sk[5] << endl;
	cout << "6.���}\n" ;
	cin >> cho;
	if(uid=="1"){
		if(cho=="0"){
			si0:
			cout << "�ݭn���ӡG" <<  skb[0] << "x1" << " " << "sp 25�I\n";
			cout << "�O�_�T�{�ǲߡH\n";
			cout << "1.Yes   2.No\n";
			cin >> cho;
			if(cho=="1"){
				if(skt[0]==1){
					cout << "�w�߱o�ӧޯ�\n";
					_sleep(2000);
					goto si;
				} 
				else if(sktb[0]>=1 && sp>=25){
					sktb[0]=sktb[0]-1;
					skt[0]=1;
					sp=sp-25;
					cout << "�ǲߦ��\\n";
					_sleep(2000);
					goto si;
				} 
				else if(sktb[0]<1 || sp<25){
					cout << "�ǲߥ���\n";
					cout << "�ޯ�ѩ�sp����\n";
					_sleep(2000);
					goto si;
				}
			}
			else if(cho=="2"){
				cout << "���ǲ�\n";
				_sleep(2000); 
				goto si;
			}
			else{
				cout << "ERROR\n";
				goto si0;
			}
		}
		else if(cho=="1"){
			si1:
			cout << "�ݭn���ӡG" <<  skb[1] << "x1" << " " << "sp 40�I\n";
			cout << "�O�_�T�{�ǲߡH\n";
			cout << "1.Yes   2.No\n";
			cin >> cho;
			if(cho=="1"){
				if(skt[1]==1){
					cout << "�w�߱o�ӧޯ�\n";
					_sleep(2000);
					goto si;
				} 
				else if(sktb[1]>=1 && sp>=40){
					sktb[1]=sktb[1]-1;
					skt[1]=1;
					sp=sp-40;
					cout << "�ǲߦ��\\n";
					_sleep(2000);
					goto si;
				}
				else if(sktb[1]<1 || sp<40){
					cout << "�ǲߥ���\n";
					cout << "�ޯ�ѩ�sp����\n";
					_sleep(2000);
					goto si;
				}
				
			}
			else if(cho=="2"){
				cout << "���ǲ�\n";
				_sleep(2000); 
				goto si;
			}
			else{
				cout << "ERROR\n";
				goto si0;
			}
		}
		else if(cho=="2" || cho=="3" || cho=="4" || cho=="5" ){
			cout << "¾�~���ŵL�k�ǲ�\n";
			goto si;
		}
		else if(cho=="6"){
			return 1;
	  	}
	  	else{
	  		cout << "ERROR\n";
			_sleep(1000);
			goto si;	
		}
	}
	if(uid=="2"){
		if(cho=="2"){
			si2:
			cout << "�ݭn���ӡG" <<  skb[2] << "x1" << " " << "sp 25�I\n";
			cout << "�O�_�T�{�ǲߡH\n";
			cout << "1.Yes   2.No\n";
			cin >> cho;
			if(cho=="1"){
				if(skt[2]==1){
					cout << "�w�߱o�ӧޯ�\n";
					_sleep(2000);
					goto si;
				} 
				else if(sktb[2]>=1 && sp>=25){
					sktb[2]=sktb[2]-1;
					skt[2]=1;
					sp=sp-25;
					cout << "�ǲߦ��\\n";
					_sleep(2000);
					goto si;
				} 
				else if(sktb[2]<1 || sp<25){
					cout << "�ǲߥ���\n";
					cout << "�ޯ�ѩ�sp����\n";
					_sleep(2000);
					goto si;
				}
			}
			else if(cho=="2"){
				cout << "���ǲ�\n";
				_sleep(2000); 
				goto si;
			}
			else{
				cout << "ERROR\n";
				goto si2;
			}
		}
		else if(cho=="3"){
			si3:
			cout << "�ݭn���ӡG" <<  skb[3] << "x1" << " " << "sp 40�I\n";
			cout << "�O�_�T�{�ǲߡH\n";
			cout << "1.Yes   2.No\n";
			cin >> cho;
			if(cho=="1"){
				if(skt[3]==1){
					cout << "�w�߱o�ӧޯ�\n";
					_sleep(2000);
					goto si;
				} 
				else if(sktb[3]>=1 && sp>=40){
					sktb[3]=sktb[3]-1;
					skt[3]=1;
					sp=sp-40;
					cout << "�ǲߦ��\\n";
					_sleep(2000);
					goto si;
				}
				else if(sktb[3]<1 || sp<40){
					cout << "�ǲߥ���\n";
					cout << "�ޯ�ѩ�sp����\n";
					_sleep(2000);
					goto si;
				}
				
			}
			else if(cho=="2"){
				cout << "���ǲ�\n";
				_sleep(2000); 
				goto si;
			}
			else{
				cout << "ERROR\n";
				goto si3;
			}
		}
		else if(cho=="0" || cho=="1" || cho=="4" || cho=="5" ){
			cout << "¾�~���ŵL�k�ǲ�\n";
			goto si;
		}
		else if(cho=="6"){
			return 1;
	  	}
	  	else{
	  		cout << "ERROR\n";
			_sleep(1000);
			goto si;	
		}
	}
	if(uid=="3"){
		if(cho=="4"){
			si4:
			cout << "�ݭn���ӡG" <<  skb[4] << "x1" << " " << "sp 25�I\n";
			cout << "�O�_�T�{�ǲߡH\n";
			cout << "1.Yes   2.No\n";
			cin >> cho;
			if(cho=="1"){
				if(skt[4]==1){
					cout << "�w�߱o�ӧޯ�\n";
					_sleep(2000);
					goto si;
				} 
				else if(sktb[4]>=1 && sp>=25){
					sktb[4]=sktb[4]-1;
					skt[4]=1;
					sp=sp-25;
					cout << "�ǲߦ��\\n";
					_sleep(2000);
					goto si;
				} 
				else if(sktb[4]<1 || sp<25){
					cout << "�ǲߥ���\n";
					cout << "�ޯ�ѩ�sp����\n";
					_sleep(2000);
					goto si;
				}
			}
			else if(cho=="2"){
				cout << "���ǲ�\n";
				_sleep(2000); 
				goto si;
			}
			else{
				cout << "ERROR\n";
				goto si4;
			}
		}
		else if(cho=="5"){
			si5:
			cout << "�ݭn���ӡG" <<  skb[5] << "x1" << " " << "sp 40�I\n";
			cout << "�O�_�T�{�ǲߡH\n";
			cout << "1.Yes   2.No\n";
			cin >> cho;
			if(cho=="1"){
				if(skt[5]==1){
					cout << "�w�߱o�ӧޯ�\n";
					_sleep(2000);
					goto si;
				} 
				else if(sktb[5]>=1 && sp>=40){
					sktb[5]=sktb[5]-1;
					skt[5]=1;
					sp=sp-40;
					cout << "�ǲߦ��\\n";
					_sleep(2000);
					goto si;
				}
				else if(sktb[5]<1 || sp<40){
					cout << "�ǲߥ���\n";
					cout << "�ޯ�ѩ�sp����\n";
					_sleep(2000);
					goto si;
				}
				
			}
			else if(cho=="2"){
				cout << "���ǲ�\n";
				_sleep(2000); 
				goto si;
			}
			else{
				cout << "ERROR\n";
				goto si5;
			}
		}
		else if(cho=="2" || cho=="3" || cho=="0" || cho=="1" ){
			cout << "¾�~���ŵL�k�ǲ�\n";
			goto si;
		}
		else if(cho=="6"){
			return 1;
	  	}
	  	else{
	  		cout << "ERROR\n";
			_sleep(1000);
			goto si;	
		}
	}
}
int fight(int ms,int mlv){    //�԰� 
	system("cls");
	srand(time(NULL));
	int gl=rand()%10+1;
	int obb=rand()%2+1;
	int tak=0;
	int mtak=0;
	int oo=obb*mlv;
	int gll=gl*mlv;
	int e=rand()%10+1;
	int ee=e*mlv; 
	int monip00[6]{0,0,0,0,0,0};
	int monip11[6]{0,0,0,0,0,0};
	int monip22[6]{0,0,0,0,0,0};
	if(ms==0){
		monip00[0]=monip0[0]*mlv;
		monip00[1]=monip0[1]*mlv;
		monip00[2]=monip0[2]*mlv;
		monip00[3]=monip0[3]*mlv;
		monip00[4]=monip0[4]*mlv;
		monip00[5]=monip0[5]*mlv;
		mos0:
		cout << mon[ms] << "LV" << mlv <<"\n";
		cout << endl;
		cout<< "�����O�G"<< monip00[0] << endl;
		cout<< "���m�O�G"<< monip00[2] << endl;
		cout<< "�t��  �G"<< monip00[3] << endl;
		cout<< "��q  �G"<< monip00[4] << endl;
		cout << endl;
		cout << "1.����\n";
		cout << "2.�ޯ�\n";
		cout << "3.�D��\n";                   
		cout << "0.�k�]\n";
		cin >> cho;
		if(cho=="0"){
			cout << "�A��ܤF�k�]\n";
			_sleep(2000);
			return 1;
		}
		else if(cho=="1"){
			if(AGI>=monip00[3]){
				if(uid=="1"){
					if(ATK<=monip00[2]){
						tak=1;
					}
					else{
						tak=ATK-monip00[2];
					}
				}
				else if(uid=="2"){
					if(MAG<=monip00[2]){
						tak=1;
					}
					else{
						tak=MAG-monip00[2];
					}
				}
				else if(uid=="3"){
					if((ATK+MAG)<=monip00[2]){
						tak=1;
					}
					else{
						tak=ATK+MAG-monip00[2];
					}
				}
				monip00[4]=monip00[4]-tak;
				cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
				if(monip00[4]<=0){
					cout << "���ߧA�����F" << mon[ms] << endl;
					_sleep(500);
					cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
					money=money+gll;
					ob[2]=ob[2]+oo;
					_sleep(500);
					cout << "��o�g��ȡG" << ee << endl; 
					exp=exp+ee;
					_sleep(2000);
					return 1;
				}
				else if(monip00[4]>0){
					cout << mon[ms] << "����q�Ѿl" << monip00[4] <<"\n" ;
					_sleep(500);
					if(monip00[0]<=DEF){
						mtak=1;
					}
					else {
						mtak=monip00[0]-DEF;
					}
					hp=hp-mtak;
					cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
					_sleep(500);
					cout << "�A����q�Ѿl" << hp <<"\n" ;
					_sleep(2000);
					if(hp>0){
						goto mos0;
					}
					else if(hp<=0){
						cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
						_sleep(500);
						cout << "�Y�N�ǰe�^�_�l����\n";
						_sleep(500);
						cout << ".\n";
						_sleep(500);
						cout << "..\n";
						_sleep(500);
						cout << "...\n";
						_sleep(2000);
						locate=0;
						hp=1;
						return 1;
					}
				}
			}
			else if(AGI<monip00[3]){
				if(monip00[0]<=DEF){
						mtak=1;
				}
				else {
					mtak=monip00[0]-DEF;
				}
				hp=hp-mtak;	
				cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
				_sleep(500);
				cout << "�A����q�Ѿl" << hp <<"\n" ;
				_sleep(2000);
				if(hp>0){
					if(uid=="1"){
						if(ATK<=monip00[2]){
							tak=1;
						}
						else{
							tak=ATK-monip00[2];
						}
					}
					else if(uid=="2"){
						if(MAG<=monip00[2]){
							tak=1;
						}
						else{
							tak=MAG-monip00[2];
						}
					}
					else if(uid=="3"){
						if((ATK+MAG)<=monip00[2]){
							tak=1;
						}
						else{
							tak=ATK+MAG-monip00[2];
						}
					}
					monip00[4]=monip00[4]-tak;
					cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
					if(monip00[4]<=0){
						cout << "���ߧA�����F" << mon[ms] << endl;
						_sleep(500);
						cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
						money=money+gll;
						ob[2]=ob[2]+oo;
						_sleep(500);
						cout << "��o�g��ȡG" << ee << endl; 
						exp=exp+ee;
						_sleep(2000);
						return 1;
					}
					else if(monip00[4]>0){
						goto mos0;
					}	
				}
				else if(hp<=0){
					cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
					_sleep(500);
					cout << "�Y�N�ǰe�^�_�l����\n";
					_sleep(500);
					cout << ".\n";
					_sleep(500);
					cout << "..\n";
					_sleep(500);
					cout << "...\n";
					_sleep(2000);
					locate=0;
					hp=1;
					return 1;
				}
			}
		}
		else if(cho=="2"){
			if(uid=="1"){
				cout << "�п�ܧޯ�G\n";
				cout << "1." << sk[0] << "�G" << "cost" << "30\n";
				cout << "2." << sk[1] << "�G" << "cost" << "50\n";
				cout << "0.����\n";
				cin >> cho;
				if(cho=="0"){
					goto mos0;
				}
				else if(cho=="1"){
					if(mp<30){
						cout << "�]�O����" << endl;
						_sleep(1000);
						goto mos0; 
					}
					else if(mp>=30){
						if(ATK*2<=monip00[2]){
							tak=1;	
						}
						else{
							tak=ATK*2-monip00[2];
						}
						mp=mp-30;
						monip00[4]=monip00[4]-tak;
						cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
						if(monip00[4]<=0){
							cout << "���ߧA�����F" << mon[ms] << endl;
							_sleep(500);
							cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
							money=money+gll;
							ob[2]=ob[2]+oo;
							_sleep(500);
							cout << "��o�g��ȡG" << ee << endl; 
							exp=exp+ee;
							_sleep(2000);
							return 1;
						}
						else if(monip00[4]>0){
							cout << mon[ms] << "����q�Ѿl" << monip00[4] <<"\n" ;
							_sleep(500);
							if(monip00[0]<=DEF){
								mtak=1;
							}
							else {
								mtak=monip00[0]-DEF;
							}
							hp=hp-mtak;
							cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
							_sleep(500);
							cout << "�A����q�Ѿl" << hp <<"\n" ;
							_sleep(2000);
							if(hp>0){
								goto mos0;
							}
							else if(hp<=0){
								cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
								_sleep(500);
								cout << "�Y�N�ǰe�^�_�l����\n";
								_sleep(500);
								cout << ".\n";
								_sleep(500);
								cout << "..\n";
								_sleep(500);
								cout << "...\n";
								_sleep(2000);
								locate=0;
								hp=1;
								return 1;
							}
						}
					}
				}
				else if(cho=="2"){
					if(mp<50){
						cout << "�]�O����" << endl;
						_sleep(1000);
						goto mos0; 
					}
					else if(mp>=50){
						if((ATK*3)<=monip00[2]){
							tak=1;	
						}
						else {
							tak=ATK*3-monip00[2];
						}
						mp=mp-50;
						monip00[4]=monip00[4]-tak;
						cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
						if(monip00[4]<=0){
							cout << "���ߧA�����F" << mon[ms] << endl;
							_sleep(500);
							cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
							money=money+gll;
							ob[2]=ob[2]+oo;
							_sleep(500);
							cout << "��o�g��ȡG" << ee << endl; 
							exp=exp+ee;
							_sleep(2000);
							return 1;
						}
						else if(monip00[4]>0){
							cout << mon[ms] << "����q�Ѿl" << monip00[4] <<"\n" ;
							_sleep(500);
							if(DEF>=monip00[0]){
								mtak=1;
							}
							else{
								mtak=monip00[0]-DEF;
							}
							hp=hp-mtak;
							cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
							_sleep(500);
							cout << "�A����q�Ѿl" << hp <<"\n" ;
							_sleep(2000);
							if(hp>0){
								goto mos0;
							}
							else if(hp<=0){
								cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
								_sleep(500);
								cout << "�Y�N�ǰe�^�_�l����\n";
								_sleep(500);
								cout << ".\n";
								_sleep(500);
								cout << "..\n";
								_sleep(500);
								cout << "...\n";
								_sleep(2000);
								locate=0;
								hp=1;
								return 1;
							}
						}
					}	
				}
			}
			else if(uid=="2"){
				cout << "�п�ܧޯ�G\n";
				cout << "1." << sk[2] << "�G" << "cost" << "30\n";
				cout << "2." << sk[3] << "�G" << "cost" << "50\n";
				cout << "0.����\n";
				cin >> cho;
				if(cho=="0"){
					goto mos0;
				}
				else if(cho=="1"){
					if(mp<30){
						cout << "�]�O����" << endl;
						_sleep(1000);
						goto mos0; 
					}
					else if(mp>=30){
						if((MAG*3)<=monip00[2]){
							tak=1;	
						}
						else {
							tak=MAG*2-monip00[2];
						}
						mp=mp-30;
						monip00[4]=monip00[4]-tak;
						cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
						if(monip00[4]<=0){
							cout << "���ߧA�����F" << mon[ms] << endl;
							_sleep(500);
							cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
							money=money+gll;
							ob[2]=ob[2]+oo;
							_sleep(500);
							cout << "��o�g��ȡG" << ee << endl; 
							exp=exp+ee;
							_sleep(2000);
							return 1;
						}
						else if(monip00[4]>0){
							cout << mon[ms] << "����q�Ѿl" << monip00[4] <<"\n" ;
							_sleep(500);
							if(DEF>=monip00[0]){
								mtak=1;
							}
							else{
								mtak=monip00[0]-DEF;
							}
							hp=hp-mtak;
							cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
							_sleep(500);
							cout << "�A����q�Ѿl" << hp <<"\n" ;
							_sleep(2000);
							if(hp>0){
								goto mos0;
							}
							else if(hp<=0){
								cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
								_sleep(500);
								cout << "�Y�N�ǰe�^�_�l����\n";
								_sleep(500);
								cout << ".\n";
								_sleep(500);
								cout << "..\n";
								_sleep(500);
								cout << "...\n";
								_sleep(2000);
								locate=0;
								hp=1;
								return 1;
							}
						}
					}
				}
				else if(cho=="2"){
					if(mp<50){
						cout << "�]�O����" << endl;
						_sleep(1000);
						goto mos0; 
					}
					else if(mp>=50){
						cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
						_sleep(500);
						cout << "�A����q�Ѿl" << hp <<"\n" ;
						_sleep(2000);
						if(hp>0){
							tak=mtak*2;
							monip00[4]=monip00[4]-tak;
							cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
							if(monip00[4]<=0){
								cout << "���ߧA�����F" << mon[ms] << endl;
								_sleep(500);
								cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
								money=money+gll;
								ob[2]=ob[2]+oo;
								_sleep(500);
								cout << "��o�g��ȡG" << ee << endl; 
								exp=exp+ee;
								_sleep(2000);
								return 1;
							}
							else if(monip00[4]>0){
								goto mos0;
							}	
						}
						else if(hp<=0){
							cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
							_sleep(500);
							cout << "�Y�N�ǰe�^�_�l����\n";
							_sleep(500);
							cout << ".\n";
							_sleep(500);
							cout << "..\n";
							_sleep(500);
							cout << "...\n";
							_sleep(2000);
							locate=0;
							hp=1;
							return 1;
						}
				    }	
				}
			}
			else if(uid=="3"){
				cout << "�п�ܧޯ�G\n";
				cout << "1." << sk[4] << "�G" << "cost" << "30\n";
				cout << "2." << sk[5] << "�G" << "cost" << "50\n";
				cout << "0.����\n";
				cin >> cho;
				if(cho=="0"){
					goto mos0;
				}
				else if(cho=="1"){
					if(mp<30){
						cout << "�]�O����" << endl;
						_sleep(1000);
						goto mos0; 
					}
					else if(mp>=30){
						if((ATK+MAG)*2<=monip00[2]){
							tak=1;
						}
						else{
							tak=(ATK+MAG)*2-monip00[2];
						}
						mp=mp-30;
						monip00[4]=monip00[4]-tak;
						cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
						if(monip00[4]<=0){
							cout << "���ߧA�����F" << mon[ms] << endl;
							_sleep(500);
							cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
							money=money+gll;
							ob[2]=ob[2]+oo;
							_sleep(500);
							cout << "��o�g��ȡG" << ee << endl; 
							exp=exp+ee;
							_sleep(2000);
							return 1;
						}
						else if(monip00[4]>0){
							cout << mon[ms] << "����q�Ѿl" << monip00[4] <<"\n" ;
							_sleep(500);
							if(monip00[0]<=DEF){
								mtak=1;
							}
							else{
								mtak=monip00[0]-DEF;
							}
							hp=hp-mtak;
							cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
							_sleep(500);
							cout << "�A����q�Ѿl" << hp <<"\n" ;
							_sleep(2000);
							if(hp>0){
								goto mos0;
							}
							else if(hp<=0){
								cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
								_sleep(500);
								cout << "�Y�N�ǰe�^�_�l����\n";
								_sleep(500);
								cout << ".\n";
								_sleep(500);
								cout << "..\n";
								_sleep(500);
								cout << "...\n";
								_sleep(2000);
								locate=0;
								hp=1;
								return 1;
							}
						}
					}
				}
				else if(cho=="2"){
					if(mp<50){
						cout << "�]�O����" << endl;
						_sleep(1000);
						goto mos0; 
					}
					else if(mp>=50){
						if((ATK*3+MAG*3)<=monip00[2]){
							tak=1;
						}
						else{
							tak=ATK*3+MAG*3-monip00[2];
						}
						mp=mp-50;
						monip00[4]=monip00[4]-tak;
						cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
						if(monip00[4]<=0){
							cout << "���ߧA�����F" << mon[ms] << endl;
							_sleep(500);
							cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
							money=money+gll;
							ob[2]=ob[2]+oo;
							_sleep(500);
							cout << "��o�g��ȡG" << ee << endl; 
							exp=exp+ee;
							_sleep(2000);
							return 1;
						}
						else if(monip00[4]>0){
							cout << mon[ms] << "����q�Ѿl" << monip00[4] <<"\n" ;
							_sleep(500);
							if(monip00[0]<=DEF){
								mtak=1;
							}
							else{
								mtak=monip00[0]-DEF;
							}
							hp=hp-mtak;
							cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
							_sleep(500);
							cout << "�A����q�Ѿl" << hp <<"\n" ;
							_sleep(2000);
							if(hp>0){
								goto mos0;
							}
							else if(hp<=0){
								cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
								_sleep(500);
								cout << "�Y�N�ǰe�^�_�l����\n";
								_sleep(500);
								cout << ".\n";
								_sleep(500);
								cout << "..\n";
								_sleep(500);
								cout << "...\n";
								_sleep(2000);
								locate=0;
								hp=1;
								return 1;
							}
						}
					}	
				}
			}
		}
		else if(cho=="3"){
			cout << "�п�ܨϥ��ľ��G\n";
			cout << "1.HP�Ĥ�\n";
			cout << "2.MP�Ĥ�\n";
			cout << "3.�t��\n";
			cout << "0.����\n";
			cin >> cho;
			if(cho=="0"){
				goto mos0;
			}
			if(AGI>=monip00[3]){
				if(cho=="1"){
					if(bg[12]<=0){
						cout << "�����Ƥ���\n";
					    _sleep(1000);
					    goto mos0;
					}
					bg[12]=bg[12]-1;
					hp=hp+100;
					if(hp>=HP){
						hp=HP;
					}
				}
				else if(cho=="2"){
					if(bg[13]<=0){
						cout << "�����Ƥ���\n";
					    _sleep(1000);
					    goto mos0;
					}
					bg[13]=bg[13]-1;
					mp=mp+100;
					if(mp>=MP){
						mp=MP;
					}
				}
				else if(cho=="3"){
					if(bg[14]<=0){
						cout << "�����Ƥ���\n";
					    _sleep(1000);
					    goto mos0;
					}
					bg[14]=bg[14]-1;
					hp=HP;
					mp=MP;
				}
				cout << "�^�_����" <<"\n";
				if(monip00[0]<=DEF){
					mtak=1;
				}
				else{
					mtak=monip00[0]-DEF;
				}
				hp=hp-mtak;
				cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
				_sleep(500);
				cout << "�A����q�Ѿl" << hp <<"\n" ;
				_sleep(2000);
				if(hp>0){
					goto mos0;
				}
				else if(hp<=0){
					cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
					_sleep(500);
					cout << "�Y�N�ǰe�^�_�l����\n";
					_sleep(500);
					cout << ".\n";
					_sleep(500);
					cout << "..\n";
					_sleep(500);
					cout << "...\n";
					_sleep(2000);
					locate=0;
					hp=1;
					return 1;
				}
			}
		else if(AGI<monip00[3]){
			if(monip00[0]<=DEF){
				mtak=1;
			}
			else{
				mtak=monip00[0]-DEF;
			}
			hp=hp-mtak;
			cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
			_sleep(500);
			cout << "�A����q�Ѿl" << hp <<"\n" ;
			_sleep(2000);
			if(hp>0){
				if(cho=="1"){
					if(bg[12]<=0){
						cout << "�����Ƥ���\n";
					    _sleep(1000);
					    goto mos0;
					}
					bg[12]=bg[12]-1;
					hp=hp+100;
					if(hp>=HP){
						hp=HP;
					}
				}
				else if(cho=="2"){
					if(bg[13]<=0){
						cout << "�����Ƥ���\n";
					    _sleep(1000);
					    goto mos0;
					}
					bg[13]=bg[13]-1;
					mp=mp+100;
					if(mp>=MP){
						mp=MP;
					}
				}
				else if(cho=="3"){
					if(bg[14]<=0){
						cout << "�����Ƥ���\n";
					    _sleep(1000);
					    goto mos0;
					}
					bg[14]=bg[14]-1;
					hp=HP;
					mp=MP;
				}
				cout << "�^�_����" <<"\n" ;
				goto mos0;
			}
			else if(hp<=0){
				cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
				_sleep(500);
				cout << "�Y�N�ǰe�^�_�l����\n";
				_sleep(500);
				cout << ".\n";
				_sleep(500);
				cout << "..\n";
				_sleep(500);
				cout << "...\n";
				_sleep(2000);
				locate=0;
				hp=1;
				return 1;
			}
		}
	}
    }
	if(ms==1){
		monip11[0]=monip1[0]*mlv;
		monip11[1]=monip1[1]*mlv;
		monip11[2]=monip1[2]*mlv;
		monip11[3]=monip1[3]*mlv;
		monip11[4]=monip1[4]*mlv;
		monip11[5]=monip1[5]*mlv;
		mos1:
		cout << mon[ms] << "LV" << mlv <<"\n";
		cout << endl;
		cout<< "�����O�G"<< monip11[0] << endl;
		cout<< "���m�O�G"<< monip11[2] << endl;
		cout<< "�t��  �G"<< monip11[3] << endl;
		cout<< "��q  �G"<< monip11[4] << endl;
		cout << endl;
		cout << "1.����\n";
		cout << "2.�ޯ�\n";
		cout << "3.�D��\n";                   
		cout << "0.�k�]\n";
		cin >> cho;
		if(cho=="0"){
			cout << "�A��ܤF�k�]\n";
			_sleep(2000);
			return 1;
		}
		else if(cho=="1"){
			if(AGI>=monip11[3]){
				if(uid=="1"){
					if(ATK<=monip11[2]){
						tak=1;
					}
					else{
						tak=ATK-monip11[2];
					}
				}
				else if(uid=="2"){
					if(MAG<=monip11[2]){
						tak=1;
					}
					else{
						tak=MAG-monip11[2];
					}
				}
				else if(uid=="3"){
					if((ATK+MAG)<=monip11[2]){
						tak=1;
					}
					else{
						tak=ATK+MAG-monip11[2];
					}
				}
				monip11[4]=monip11[4]-tak;
				cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
				if(monip11[4]<=0){
					cout << "���ߧA�����F" << mon[ms] << endl;
					_sleep(500);
					cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
					money=money+gll;
					ob[2]=ob[2]+oo;
					_sleep(500);
					cout << "��o�g��ȡG" << ee << endl; 
					exp=exp+ee;
					_sleep(2000);
					return 1;
				}
				else if(monip11[4]>0){
					cout << mon[ms] << "����q�Ѿl" << monip11[4] <<"\n" ;
					_sleep(500);
					if(monip11[0]<=DEF){
						mtak=1;
					}
					else {
						mtak=monip11[0]-DEF;
					}
					hp=hp-mtak;
					cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
					_sleep(500);
					cout << "�A����q�Ѿl" << hp <<"\n" ;
					_sleep(2000);
					if(hp>0){
						goto mos1;
					}
					else if(hp<=0){
						cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
						_sleep(500);
						cout << "�Y�N�ǰe�^�_�l����\n";
						_sleep(500);
						cout << ".\n";
						_sleep(500);
						cout << "..\n";
						_sleep(500);
						cout << "...\n";
						_sleep(2000);
						locate=0;
						hp=1;
						return 1;
					}
				}
			}
			else if(AGI<monip11[3]){
				if(monip11[0]<=DEF){
						mtak=1;
				}
				else {
					mtak=monip11[0]-DEF;
				}
				hp=hp-mtak;	
				cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
				_sleep(500);
				cout << "�A����q�Ѿl" << hp <<"\n" ;
				_sleep(2000);
				if(hp>0){
					if(uid=="1"){
						if(ATK<=monip11[2]){
							tak=1;
						}
						else{
							tak=ATK-monip11[2];
						}
					}
					else if(uid=="2"){
						if(MAG<=monip11[2]){
							tak=1;
						}
						else{
							tak=MAG-monip11[2];
						}
					}
					else if(uid=="3"){
						if((ATK+MAG)<=monip11[2]){
							tak=1;
						}
						else{
							tak=ATK+MAG-monip11[2];
						}
					}
					monip11[4]=monip11[4]-tak;
					cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
					if(monip11[4]<=0){
						cout << "���ߧA�����F" << mon[ms] << endl;
						_sleep(500);
						cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
						money=money+gll;
						ob[2]=ob[2]+oo;
						_sleep(500);
						cout << "��o�g��ȡG" << ee << endl; 
						exp=exp+ee;
						_sleep(2000);
						return 1;
					}
					else if(monip11[4]>0){
						goto mos1;
					}	
				}
				else if(hp<=0){
					cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
					_sleep(500);
					cout << "�Y�N�ǰe�^�_�l����\n";
					_sleep(500);
					cout << ".\n";
					_sleep(500);
					cout << "..\n";
					_sleep(500);
					cout << "...\n";
					_sleep(2000);
					locate=0;
					hp=1;
					return 1;
				}
			}
		}
		else if(cho=="2"){
			if(uid=="1"){
				cout << "�п�ܧޯ�G\n";
				cout << "1." << sk[0] << "�G" << "cost" << "30\n";
				cout << "2." << sk[1] << "�G" << "cost" << "50\n";
				cout << "0.����\n";
				cin >> cho;
				if(cho=="0"){
					goto mos1;
				}
				else if(cho=="1"){
					if(mp<30){
						cout << "�]�O����" << endl;
						_sleep(1000);
						goto mos1; 
					}
					else if(mp>=30){
						if(ATK*2<=monip11[2]){
							tak=1;	
						}
						else{
							tak=ATK*2-monip11[2];
						}
						mp=mp-30;
						monip11[4]=monip11[4]-tak;
						cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
						if(monip11[4]<=0){
							cout << "���ߧA�����F" << mon[ms] << endl;
							_sleep(500);
							cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
							money=money+gll;
							ob[2]=ob[2]+oo;
							_sleep(500);
							cout << "��o�g��ȡG" << ee << endl; 
							exp=exp+ee;
							_sleep(2000);
							return 1;
						}
						else if(monip11[4]>0){
							cout << mon[ms] << "����q�Ѿl" << monip11[4] <<"\n" ;
							_sleep(500);
							if(monip11[0]<=DEF){
								mtak=1;
							}
							else {
								mtak=monip11[0]-DEF;
							}
							hp=hp-mtak;
							cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
							_sleep(500);
							cout << "�A����q�Ѿl" << hp <<"\n" ;
							_sleep(2000);
							if(hp>0){
								goto mos1;
							}
							else if(hp<=0){
								cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
								_sleep(500);
								cout << "�Y�N�ǰe�^�_�l����\n";
								_sleep(500);
								cout << ".\n";
								_sleep(500);
								cout << "..\n";
								_sleep(500);
								cout << "...\n";
								_sleep(2000);
								locate=0;
								hp=1;
								return 1;
							}
						}
					}
				}
				else if(cho=="2"){
					if(mp<50){
						cout << "�]�O����" << endl;
						_sleep(1000);
						goto mos1; 
					}
					else if(mp>=50){
						if((ATK*3)<=monip11[2]){
							tak=1;	
						}
						else {
							tak=ATK*3-monip11[2];
						}
						mp=mp-50;
						monip11[4]=monip11[4]-tak;
						cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
						if(monip11[4]<=0){
							cout << "���ߧA�����F" << mon[ms] << endl;
							_sleep(500);
							cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
							money=money+gll;
							ob[2]=ob[2]+oo;
							_sleep(500);
							cout << "��o�g��ȡG" << ee << endl; 
							exp=exp+ee;
							_sleep(2000);
							return 1;
						}
						else if(monip11[4]>0){
							cout << mon[ms] << "����q�Ѿl" << monip11[4] <<"\n" ;
							_sleep(500);
							if(DEF>=monip11[0]){
								mtak=1;
							}
							else{
								mtak=monip11[0]-DEF;
							}
							hp=hp-mtak;
							cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
							_sleep(500);
							cout << "�A����q�Ѿl" << hp <<"\n" ;
							_sleep(2000);
							if(hp>0){
								goto mos1;
							}
							else if(hp<=0){
								cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
								_sleep(500);
								cout << "�Y�N�ǰe�^�_�l����\n";
								_sleep(500);
								cout << ".\n";
								_sleep(500);
								cout << "..\n";
								_sleep(500);
								cout << "...\n";
								_sleep(2000);
								locate=0;
								hp=1;
								return 1;
							}
						}
					}	
				}
			}
			else if(uid=="2"){
				cout << "�п�ܧޯ�G\n";
				cout << "1." << sk[2] << "�G" << "cost" << "30\n";
				cout << "2." << sk[3] << "�G" << "cost" << "50\n";
				cout << "0.����\n";
				cin >> cho;
				if(cho=="0"){
					goto mos1;
				}
				else if(cho=="1"){
					if(mp<30){
						cout << "�]�O����" << endl;
						_sleep(1000);
						goto mos1; 
					}
					else if(mp>=30){
						if((MAG*3)<=monip11[2]){
							tak=1;	
						}
						else {
							tak=MAG*2-monip11[2];
						}
						mp=mp-30;
						monip11[4]=monip11[4]-tak;
						cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
						if(monip11[4]<=0){
							cout << "���ߧA�����F" << mon[ms] << endl;
							_sleep(500);
							cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
							money=money+gll;
							ob[2]=ob[2]+oo;
							_sleep(500);
							cout << "��o�g��ȡG" << ee << endl; 
							exp=exp+ee;
							_sleep(2000);
							return 1;
						}
						else if(monip11[4]>0){
							cout << mon[ms] << "����q�Ѿl" << monip11[4] <<"\n" ;
							_sleep(500);
							if(DEF>=monip11[0]){
								mtak=1;
							}
							else{
								mtak=monip11[0]-DEF;
							}
							hp=hp-mtak;
							cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
							_sleep(500);
							cout << "�A����q�Ѿl" << hp <<"\n" ;
							_sleep(2000);
							if(hp>0){
								goto mos1;
							}
							else if(hp<=0){
								cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
								_sleep(500);
								cout << "�Y�N�ǰe�^�_�l����\n";
								_sleep(500);
								cout << ".\n";
								_sleep(500);
								cout << "..\n";
								_sleep(500);
								cout << "...\n";
								_sleep(2000);
								locate=0;
								hp=1;
								return 1;
							}
						}
					}
				}
				else if(cho=="2"){
					if(mp<50){
						cout << "�]�O����" << endl;
						_sleep(1000);
						goto mos1; 
					}
					else if(mp>=50){
						cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
						_sleep(500);
						cout << "�A����q�Ѿl" << hp <<"\n" ;
						_sleep(2000);
						if(hp>0){
							tak=mtak*2;
							monip11[4]=monip11[4]-tak;
							cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
							if(monip11[4]<=0){
								cout << "���ߧA�����F" << mon[ms] << endl;
								_sleep(500);
								cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
								money=money+gll;
								ob[2]=ob[2]+oo;
								_sleep(500);
								cout << "��o�g��ȡG" << ee << endl; 
								exp=exp+ee;
								_sleep(2000);
								return 1;
							}
							else if(monip11[4]>0){
								goto mos1;
							}	
						}
						else if(hp<=0){
							cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
							_sleep(500);
							cout << "�Y�N�ǰe�^�_�l����\n";
							_sleep(500);
							cout << ".\n";
							_sleep(500);
							cout << "..\n";
							_sleep(500);
							cout << "...\n";
							_sleep(2000);
							locate=0;
							hp=1;
							return 1;
						}
				    }	
				}
			}
			else if(uid=="3"){
				cout << "�п�ܧޯ�G\n";
				cout << "1." << sk[4] << "�G" << "cost" << "30\n";
				cout << "2." << sk[5] << "�G" << "cost" << "50\n";
				cout << "0.����\n";
				cin >> cho;
				if(cho=="0"){
					goto mos1;
				}
				else if(cho=="1"){
					if(mp<30){
						cout << "�]�O����" << endl;
						_sleep(1000);
						goto mos1; 
					}
					else if(mp>=30){
						if((ATK+MAG)*2<=monip11[2]){
							tak=1;
						}
						else{
							tak=(ATK+MAG)*2-monip11[2];
						}
						mp=mp-30;
						monip11[4]=monip11[4]-tak;
						cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
						if(monip11[4]<=0){
							cout << "���ߧA�����F" << mon[ms] << endl;
							_sleep(500);
							cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
							money=money+gll;
							ob[2]=ob[2]+oo;
							_sleep(500);
							cout << "��o�g��ȡG" << ee << endl; 
							exp=exp+ee;
							_sleep(2000);
							return 1;
						}
						else if(monip11[4]>0){
							cout << mon[ms] << "����q�Ѿl" << monip11[4] <<"\n" ;
							_sleep(500);
							if(monip11[0]<=DEF){
								mtak=1;
							}
							else{
								mtak=monip11[0]-DEF;
							}
							hp=hp-mtak;
							cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
							_sleep(500);
							cout << "�A����q�Ѿl" << hp <<"\n" ;
							_sleep(2000);
							if(hp>0){
								goto mos1;
							}
							else if(hp<=0){
								cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
								_sleep(500);
								cout << "�Y�N�ǰe�^�_�l����\n";
								_sleep(500);
								cout << ".\n";
								_sleep(500);
								cout << "..\n";
								_sleep(500);
								cout << "...\n";
								_sleep(2000);
								locate=0;
								hp=1;
								return 1;
							}
						}
					}
				}
				else if(cho=="2"){
					if(mp<50){
						cout << "�]�O����" << endl;
						_sleep(1000);
						goto mos1; 
					}
					else if(mp>=50){
						if((ATK*3+MAG*3)<=monip11[2]){
							tak=1;
						}
						else{
							tak=ATK*3+MAG*3-monip11[2];
						}
						mp=mp-50;
						monip11[4]=monip11[4]-tak;
						cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
						if(monip11[4]<=0){
							cout << "���ߧA�����F" << mon[ms] << endl;
							_sleep(500);
							cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
							money=money+gll;
							ob[2]=ob[2]+oo;
							_sleep(500);
							cout << "��o�g��ȡG" << ee << endl; 
							exp=exp+ee;
							_sleep(2000);
							return 1;
						}
						else if(monip11[4]>0){
							cout << mon[ms] << "����q�Ѿl" << monip11[4] <<"\n" ;
							_sleep(500);
							if(monip11[0]<=DEF){
								mtak=1;
							}
							else{
								mtak=monip11[0]-DEF;
							}
							hp=hp-mtak;
							cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
							_sleep(500);
							cout << "�A����q�Ѿl" << hp <<"\n" ;
							_sleep(2000);
							if(hp>0){
								goto mos1;
							}
							else if(hp<=0){
								cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
								_sleep(500);
								cout << "�Y�N�ǰe�^�_�l����\n";
								_sleep(500);
								cout << ".\n";
								_sleep(500);
								cout << "..\n";
								_sleep(500);
								cout << "...\n";
								_sleep(2000);
								locate=0;
								hp=1;
								return 1;
							}
						}
					}	
				}
			}
		}
		else if(cho=="3"){
			cout << "�п�ܨϥ��ľ��G\n";
			cout << "1.HP�Ĥ�\n";
			cout << "2.MP�Ĥ�\n";
			cout << "3.�t��\n";
			cout << "0.����\n";
			cin >> cho;
			if(cho=="0"){
				goto mos1;
			}
			if(AGI>=monip11[3]){
				if(cho=="1"){
					if(bg[12]<=0){
						cout << "�����Ƥ���\n";
					    _sleep(1000);
					    goto mos1;
					}
					bg[12]=bg[12]-1;
					hp=hp+100;
					if(hp>=HP){
						hp=HP;
					}
				}
				else if(cho=="2"){
					if(bg[13]<=0){
						cout << "�����Ƥ���\n";
					    _sleep(1000);
					    goto mos1;
					}
					bg[13]=bg[13]-1;
					mp=mp+100;
					if(mp>=MP){
						mp=MP;
					}
				}
				else if(cho=="3"){
					if(bg[14]<=0){
						cout << "�����Ƥ���\n";
					    _sleep(1000);
					    goto mos1;
					}
					bg[14]=bg[14]-1;
					hp=HP;
					mp=MP;
				}
				cout << "�^�_����" <<"\n";
				if(monip11[0]<=DEF){
					mtak=1;
				}
				else{
					mtak=monip11[0]-DEF;
				}
				hp=hp-mtak;
				cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
				_sleep(500);
				cout << "�A����q�Ѿl" << hp <<"\n" ;
				_sleep(2000);
				if(hp>0){
					goto mos1;
				}
				else if(hp<=0){
					cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
					_sleep(500);
					cout << "�Y�N�ǰe�^�_�l����\n";
					_sleep(500);
					cout << ".\n";
					_sleep(500);
					cout << "..\n";
					_sleep(500);
					cout << "...\n";
					_sleep(2000);
					locate=0;
					hp=1;
					return 1;
				}
			}
		else if(AGI<monip11[3]){
			if(monip11[0]<=DEF){
				mtak=1;
			}
			else{
				mtak=monip11[0]-DEF;
			}
			hp=hp-mtak;
			cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
			_sleep(500);
			cout << "�A����q�Ѿl" << hp <<"\n" ;
			_sleep(2000);
			if(hp>0){
				if(cho=="1"){
					if(bg[12]<=0){
						cout << "�����Ƥ���\n";
					    _sleep(1000);
					    goto mos1;
					}
					bg[12]=bg[12]-1;
					hp=hp+100;
					if(hp>=HP){
						hp=HP;
					}
				}
				else if(cho=="2"){
					if(bg[13]<=0){
						cout << "�����Ƥ���\n";
					    _sleep(1000);
					    goto mos1;
					}
					bg[13]=bg[13]-1;
					mp=mp+100;
					if(mp>=MP){
						mp=MP;
					}
				}
				else if(cho=="3"){
					if(bg[14]<=0){
						cout << "�����Ƥ���\n";
					    _sleep(1000);
					    goto mos1;
					}
					bg[14]=bg[14]-1;
					hp=HP;
					mp=MP;
				}
				cout << "�^�_����" <<"\n" ;
				goto mos1;
			}
			else if(hp<=0){
				cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
				_sleep(500);
				cout << "�Y�N�ǰe�^�_�l����\n";
				_sleep(500);
				cout << ".\n";
				_sleep(500);
				cout << "..\n";
				_sleep(500);
				cout << "...\n";
				_sleep(2000);
				locate=0;
				hp=1;
				return 1;
			}
		}
	}
    }
	if(ms==2){
		monip22[0]=monip2[0]*mlv;
		monip22[1]=monip2[1]*mlv;
		monip22[2]=monip2[2]*mlv;
		monip22[3]=monip2[3]*mlv;
		monip22[4]=monip2[4]*mlv;
		monip22[5]=monip2[5]*mlv;
		mos2:
		cout << mon[ms] << "LV" << mlv <<"\n";
		cout << endl;
		cout<< "�����O�G"<< monip22[0] << endl;
		cout<< "���m�O�G"<< monip22[2] << endl;
		cout<< "�t��  �G"<< monip22[3] << endl;
		cout<< "��q  �G"<< monip22[4] << endl;
		cout << endl;
		cout << "1.����\n";
		cout << "2.�ޯ�\n";
		cout << "3.�D��\n";                   
		cout << "0.�k�]\n";
		cin >> cho;
		if(cho=="0"){
			cout << "�A��ܤF�k�]\n";
			_sleep(2000);
			return 1;
		}
		else if(cho=="1"){
			if(AGI>=monip22[3]){
				if(uid=="1"){
					if(ATK<=monip22[2]){
						tak=1;
					}
					else{
						tak=ATK-monip22[2];
					}
				}
				else if(uid=="2"){
					if(MAG<=monip22[2]){
						tak=1;
					}
					else{
						tak=MAG-monip22[2];
					}
				}
				else if(uid=="3"){
					if((ATK+MAG)<=monip22[2]){
						tak=1;
					}
					else{
						tak=ATK+MAG-monip22[2];
					}
				}
				monip22[4]=monip22[4]-tak;
				cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
				if(monip22[4]<=0){
					cout << "���ߧA�����F" << mon[ms] << endl;
					_sleep(500);
					cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
					money=money+gll;
					ob[2]=ob[2]+oo;
					_sleep(500);
					cout << "��o�g��ȡG" << ee << endl; 
					exp=exp+ee;
					_sleep(2000);
					return 1;
				}
				else if(monip22[4]>0){
					cout << mon[ms] << "����q�Ѿl" << monip22[4] <<"\n" ;
					_sleep(500);
					if(monip22[0]<=DEF){
						mtak=1;
					}
					else {
						mtak=monip22[0]-DEF;
					}
					hp=hp-mtak;
					cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
					_sleep(500);
					cout << "�A����q�Ѿl" << hp <<"\n" ;
					_sleep(2000);
					if(hp>0){
						goto mos2;
					}
					else if(hp<=0){
						cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
						_sleep(500);
						cout << "�Y�N�ǰe�^�_�l����\n";
						_sleep(500);
						cout << ".\n";
						_sleep(500);
						cout << "..\n";
						_sleep(500);
						cout << "...\n";
						_sleep(2000);
						locate=0;
						hp=1;
						return 1;
					}
				}
			}
			else if(AGI<monip22[3]){
				if(monip22[0]<=DEF){
						mtak=1;
				}
				else {
					mtak=monip22[0]-DEF;
				}
				hp=hp-mtak;	
				cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
				_sleep(500);
				cout << "�A����q�Ѿl" << hp <<"\n" ;
				_sleep(2000);
				if(hp>0){
					if(uid=="1"){
						if(ATK<=monip22[2]){
							tak=1;
						}
						else{
							tak=ATK-monip22[2];
						}
					}
					else if(uid=="2"){
						if(MAG<=monip22[2]){
							tak=1;
						}
						else{
							tak=MAG-monip22[2];
						}
					}
					else if(uid=="3"){
						if((ATK+MAG)<=monip22[2]){
							tak=1;
						}
						else{
							tak=ATK+MAG-monip22[2];
						}
					}
					monip22[4]=monip22[4]-tak;
					cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
					if(monip22[4]<=0){
						cout << "���ߧA�����F" << mon[ms] << endl;
						_sleep(500);
						cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
						money=money+gll;
						ob[2]=ob[2]+oo;
						_sleep(500);
						cout << "��o�g��ȡG" << ee << endl; 
						exp=exp+ee;
						_sleep(2000);
						return 1;
					}
					else if(monip22[4]>0){
						goto mos2;
					}	
				}
				else if(hp<=0){
					cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
					_sleep(500);
					cout << "�Y�N�ǰe�^�_�l����\n";
					_sleep(500);
					cout << ".\n";
					_sleep(500);
					cout << "..\n";
					_sleep(500);
					cout << "...\n";
					_sleep(2000);
					locate=0;
					hp=1;
					return 1;
				}
			}
		}
		else if(cho=="2"){
			if(uid=="1"){
				cout << "�п�ܧޯ�G\n";
				cout << "1." << sk[0] << "�G" << "cost" << "30\n";
				cout << "2." << sk[1] << "�G" << "cost" << "50\n";
				cout << "0.����\n";
				cin >> cho;
				if(cho=="0"){
					goto mos2;
				}
				else if(cho=="1"){
					if(mp<30){
						cout << "�]�O����" << endl;
						_sleep(1000);
						goto mos2; 
					}
					else if(mp>=30){
						if(ATK*2<=monip22[2]){
							tak=1;	
						}
						else{
							tak=ATK*2-monip22[2];
						}
						mp=mp-30;
						monip22[4]=monip22[4]-tak;
						cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
						if(monip22[4]<=0){
							cout << "���ߧA�����F" << mon[ms] << endl;
							_sleep(500);
							cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
							money=money+gll;
							ob[2]=ob[2]+oo;
							_sleep(500);
							cout << "��o�g��ȡG" << ee << endl; 
							exp=exp+ee;
							_sleep(2000);
							return 1;
						}
						else if(monip22[4]>0){
							cout << mon[ms] << "����q�Ѿl" << monip22[4] <<"\n" ;
							_sleep(500);
							if(monip22[0]<=DEF){
								mtak=1;
							}
							else {
								mtak=monip22[0]-DEF;
							}
							hp=hp-mtak;
							cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
							_sleep(500);
							cout << "�A����q�Ѿl" << hp <<"\n" ;
							_sleep(2000);
							if(hp>0){
								goto mos2;
							}
							else if(hp<=0){
								cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
								_sleep(500);
								cout << "�Y�N�ǰe�^�_�l����\n";
								_sleep(500);
								cout << ".\n";
								_sleep(500);
								cout << "..\n";
								_sleep(500);
								cout << "...\n";
								_sleep(2000);
								locate=0;
								hp=1;
								return 1;
							}
						}
					}
				}
				else if(cho=="2"){
					if(mp<50){
						cout << "�]�O����" << endl;
						_sleep(1000);
						goto mos2; 
					}
					else if(mp>=50){
						if((ATK*3)<=monip22[2]){
							tak=1;	
						}
						else {
							tak=ATK*3-monip22[2];
						}
						mp=mp-50;
						monip22[4]=monip22[4]-tak;
						cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
						if(monip22[4]<=0){
							cout << "���ߧA�����F" << mon[ms] << endl;
							_sleep(500);
							cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
							money=money+gll;
							ob[2]=ob[2]+oo;
							_sleep(500);
							cout << "��o�g��ȡG" << ee << endl; 
							exp=exp+ee;
							_sleep(2000);
							return 1;
						}
						else if(monip22[4]>0){
							cout << mon[ms] << "����q�Ѿl" << monip22[4] <<"\n" ;
							_sleep(500);
							if(DEF>=monip22[0]){
								mtak=1;
							}
							else{
								mtak=monip22[0]-DEF;
							}
							hp=hp-mtak;
							cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
							_sleep(500);
							cout << "�A����q�Ѿl" << hp <<"\n" ;
							_sleep(2000);
							if(hp>0){
								goto mos2;
							}
							else if(hp<=0){
								cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
								_sleep(500);
								cout << "�Y�N�ǰe�^�_�l����\n";
								_sleep(500);
								cout << ".\n";
								_sleep(500);
								cout << "..\n";
								_sleep(500);
								cout << "...\n";
								_sleep(2000);
								locate=0;
								hp=1;
								return 1;
							}
						}
					}	
				}
			}
			else if(uid=="2"){
				cout << "�п�ܧޯ�G\n";
				cout << "1." << sk[2] << "�G" << "cost" << "30\n";
				cout << "2." << sk[3] << "�G" << "cost" << "50\n";
				cout << "0.����\n";
				cin >> cho;
				if(cho=="0"){
					goto mos2;
				}
				else if(cho=="1"){
					if(mp<30){
						cout << "�]�O����" << endl;
						_sleep(1000);
						goto mos2; 
					}
					else if(mp>=30){
						if((MAG*3)<=monip22[2]){
							tak=1;	
						}
						else {
							tak=MAG*2-monip22[2];
						}
						mp=mp-30;
						monip22[4]=monip22[4]-tak;
						cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
						if(monip22[4]<=0){
							cout << "���ߧA�����F" << mon[ms] << endl;
							_sleep(500);
							cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
							money=money+gll;
							ob[2]=ob[2]+oo;
							_sleep(500);
							cout << "��o�g��ȡG" << ee << endl; 
							exp=exp+ee;
							_sleep(2000);
							return 1;
						}
						else if(monip22[4]>0){
							cout << mon[ms] << "����q�Ѿl" << monip22[4] <<"\n" ;
							_sleep(500);
							if(DEF>=monip22[0]){
								mtak=1;
							}
							else{
								mtak=monip22[0]-DEF;
							}
							hp=hp-mtak;
							cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
							_sleep(500);
							cout << "�A����q�Ѿl" << hp <<"\n" ;
							_sleep(2000);
							if(hp>0){
								goto mos2;
							}
							else if(hp<=0){
								cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
								_sleep(500);
								cout << "�Y�N�ǰe�^�_�l����\n";
								_sleep(500);
								cout << ".\n";
								_sleep(500);
								cout << "..\n";
								_sleep(500);
								cout << "...\n";
								_sleep(2000);
								locate=0;
								hp=1;
								return 1;
							}
						}
					}
				}
				else if(cho=="2"){
					if(mp<50){
						cout << "�]�O����" << endl;
						_sleep(1000);
						goto mos2; 
					}
					else if(mp>=50){
						cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
						_sleep(500);
						cout << "�A����q�Ѿl" << hp <<"\n" ;
						_sleep(2000);
						if(hp>0){
							tak=mtak*2;
							monip22[4]=monip22[4]-tak;
							cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
							if(monip22[4]<=0){
								cout << "���ߧA�����F" << mon[ms] << endl;
								_sleep(500);
								cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
								money=money+gll;
								ob[2]=ob[2]+oo;
								_sleep(500);
								cout << "��o�g��ȡG" << ee << endl; 
								exp=exp+ee;
								_sleep(2000);
								return 1;
							}
							else if(monip22[4]>0){
								goto mos2;
							}	
						}
						else if(hp<=0){
							cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
							_sleep(500);
							cout << "�Y�N�ǰe�^�_�l����\n";
							_sleep(500);
							cout << ".\n";
							_sleep(500);
							cout << "..\n";
							_sleep(500);
							cout << "...\n";
							_sleep(2000);
							locate=0;
							hp=1;
							return 1;
						}
				    }	
				}
			}
			else if(uid=="3"){
				cout << "�п�ܧޯ�G\n";
				cout << "1." << sk[4] << "�G" << "cost" << "30\n";
				cout << "2." << sk[5] << "�G" << "cost" << "50\n";
				cout << "0.����\n";
				cin >> cho;
				if(cho=="0"){
					goto mos2;
				}
				else if(cho=="1"){
					if(mp<30){
						cout << "�]�O����" << endl;
						_sleep(1000);
						goto mos2; 
					}
					else if(mp>=30){
						if((ATK+MAG)*2<=monip22[2]){
							tak=1;
						}
						else{
							tak=(ATK+MAG)*2-monip22[2];
						}
						mp=mp-30;
						monip22[4]=monip22[4]-tak;
						cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
						if(monip22[4]<=0){
							cout << "���ߧA�����F" << mon[ms] << endl;
							_sleep(500);
							cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
							money=money+gll;
							ob[2]=ob[2]+oo;
							_sleep(500);
							cout << "��o�g��ȡG" << ee << endl; 
							exp=exp+ee;
							_sleep(2000);
							return 1;
						}
						else if(monip22[4]>0){
							cout << mon[ms] << "����q�Ѿl" << monip22[4] <<"\n" ;
							_sleep(500);
							if(monip22[0]<=DEF){
								mtak=1;
							}
							else{
								mtak=monip22[0]-DEF;
							}
							hp=hp-mtak;
							cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
							_sleep(500);
							cout << "�A����q�Ѿl" << hp <<"\n" ;
							_sleep(2000);
							if(hp>0){
								goto mos2;
							}
							else if(hp<=0){
								cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
								_sleep(500);
								cout << "�Y�N�ǰe�^�_�l����\n";
								_sleep(500);
								cout << ".\n";
								_sleep(500);
								cout << "..\n";
								_sleep(500);
								cout << "...\n";
								_sleep(2000);
								locate=0;
								hp=1;
								return 1;
							}
						}
					}
				}
				else if(cho=="2"){
					if(mp<50){
						cout << "�]�O����" << endl;
						_sleep(1000);
						goto mos2; 
					}
					else if(mp>=50){
						if((ATK*3+MAG*3)<=monip22[2]){
							tak=1;
						}
						else{
							tak=ATK*3+MAG*3-monip22[2];
						}
						mp=mp-50;
						monip22[4]=monip22[4]-tak;
						cout << "�A��" << mon[ms] << "�y���F" << tak <<"�I�ˮ`\n" ;
						if(monip22[4]<=0){
							cout << "���ߧA�����F" << mon[ms] << endl;
							_sleep(500);
							cout << mon[ms] << "�����Fmoney$" << gll << " " << obj[2] << "x" << oo << endl;
							money=money+gll;
							ob[2]=ob[2]+oo;
							_sleep(500);
							cout << "��o�g��ȡG" << ee << endl; 
							exp=exp+ee;
							_sleep(2000);
							return 1;
						}
						else if(monip22[4]>0){
							cout << mon[ms] << "����q�Ѿl" << monip22[4] <<"\n" ;
							_sleep(500);
							if(monip22[0]<=DEF){
								mtak=1;
							}
							else{
								mtak=monip22[0]-DEF;
							}
							hp=hp-mtak;
							cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
							_sleep(500);
							cout << "�A����q�Ѿl" << hp <<"\n" ;
							_sleep(2000);
							if(hp>0){
								goto mos2;
							}
							else if(hp<=0){
								cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
								_sleep(500);
								cout << "�Y�N�ǰe�^�_�l����\n";
								_sleep(500);
								cout << ".\n";
								_sleep(500);
								cout << "..\n";
								_sleep(500);
								cout << "...\n";
								_sleep(2000);
								locate=0;
								hp=1;
								return 1;
							}
						}
					}	
				}
			}
		}
		else if(cho=="3"){
			cout << "�п�ܨϥ��ľ��G\n";
			cout << "1.HP�Ĥ�\n";
			cout << "2.MP�Ĥ�\n";
			cout << "3.�t��\n";
			cout << "0.����\n";
			cin >> cho;
			if(cho=="0"){
				goto mos2;
			}
			if(AGI>=monip22[3]){
				if(cho=="1"){
					if(bg[12]<=0){
						cout << "�����Ƥ���\n";
					    _sleep(1000);
					    goto mos2;
					}
					bg[12]=bg[12]-1;
					hp=hp+100;
					if(hp>=HP){
						hp=HP;
					}
				}
				else if(cho=="2"){
					if(bg[13]<=0){
						cout << "�����Ƥ���\n";
					    _sleep(1000);
					    goto mos2;
					}
					bg[13]=bg[13]-1;
					mp=mp+100;
					if(mp>=MP){
						mp=MP;
					}
				}
				else if(cho=="3"){
					if(bg[14]<=0){
						cout << "�����Ƥ���\n";
					    _sleep(1000);
					    goto mos2;
					}
					bg[14]=bg[14]-1;
					hp=HP;
					mp=MP;
				}
				cout << "�^�_����" <<"\n";
				if(monip22[0]<=DEF){
					mtak=1;
				}
				else{
					mtak=monip22[0]-DEF;
				}
				hp=hp-mtak;
				cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
				_sleep(500);
				cout << "�A����q�Ѿl" << hp <<"\n" ;
				_sleep(2000);
				if(hp>0){
					goto mos2;
				}
				else if(hp<=0){
					cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
					_sleep(500);
					cout << "�Y�N�ǰe�^�_�l����\n";
					_sleep(500);
					cout << ".\n";
					_sleep(500);
					cout << "..\n";
					_sleep(500);
					cout << "...\n";
					_sleep(2000);
					locate=0;
					hp=1;
					return 1;
				}
			}
		else if(AGI<monip22[3]){
			if(monip22[0]<=DEF){
				mtak=1;
			}
			else{
				mtak=monip22[0]-DEF;
			}
			hp=hp-mtak;
			cout << mon[ms] << "��A�y���F" << mtak <<"�I�ˮ`\n" ;
			_sleep(500);
			cout << "�A����q�Ѿl" << hp <<"\n" ;
			_sleep(2000);
			if(hp>0){
				if(cho=="1"){
					if(bg[12]<=0){
						cout << "�����Ƥ���\n";
					    _sleep(1000);
					    goto mos2;
					}
					bg[12]=bg[12]-1;
					hp=hp+100;
					if(hp>=HP){
						hp=HP;
					}
				}
				else if(cho=="2"){
					if(bg[13]<=0){
						cout << "�����Ƥ���\n";
					    _sleep(1000);
					    goto mos2;
					}
					bg[13]=bg[13]-1;
					mp=mp+100;
					if(mp>=MP){
						mp=MP;
					}
				}
				else if(cho=="3"){
					if(bg[14]<=0){
						cout << "�����Ƥ���\n";
					    _sleep(1000);
					    goto mos2;
					}
					bg[14]=bg[14]-1;
					hp=HP;
					mp=MP;
				}
				cout << "�^�_����" <<"\n" ;
				goto mos2;
			}
			else if(hp<=0){
				cout << "�A�Q" << mon[ms] << "���ѤF\n" ;
				_sleep(500);
				cout << "�Y�N�ǰe�^�_�l����\n";
				_sleep(500);
				cout << ".\n";
				_sleep(500);
				cout << "..\n";
				_sleep(500);
				cout << "...\n";
				_sleep(2000);
				locate=0;
				hp=1;
				return 1;
			}
		}
	}
    }		
} 	
int monster(){  //�Ǫ���T
	mmd:
	if(hp<=0){
		return 1;
	}
	system("cls");
	srand(time(NULL));
	int ms0=rand()%2;
	int ms1=rand()%2;
	int ms2=rand()%2;
	int mlv0=rand()%5+1;
	int mlv1=rand()%5+1;
	int mlv2=rand()%5+1;
	
	cout << "|                  �Ǫ�                       ����                           �Ҧb��m                     |\n";
	cout << "|                  1." << mon[ms0] <<"                      " << mlv0 <<"                            " << "�g�c" << mlv0 << "F" << "                      |\n";
	cout << "|                  2." << mon[ms1] <<"                      " << mlv1 <<"                            " << "�g�c" << mlv1 << "F" << "                      |\n";
	cout << "|                  3." << mon[ms2] <<"                      " << mlv2 <<"                            " << "�g�c" << mlv2 << "F" << "                      |\n";
	cout << "|                                             0.���}                                                      |\n";
	cin >> cho;
	if(cho=="0"){
		return 1;
	}
	else if(cho=="1"){
		int f1=fight(ms0,mlv0);
		if(f1==1){
			goto mmd;
		}
	}
	else if(cho=="2"){
		int f2=fight(ms1,mlv1);
		if(f2==1){
			goto mmd;
		}
	}
	else if(cho=="3"){
		int f3=fight(ms2,mlv2);
		if(f3==1){
			goto mmd;
		}
	}
	else {
		cout << "ERROR\n";
		goto mmd;
	}
}
int maze(){     //�g�c 
	system("cls");
	if(hp<=0){
		return 1;
	}
	ma:
	cout << "|                                                 1.���I                                                  |\n";
	cout << "|                                                 2.���}                                                  |\n";
	cin >> cho;
	if(cho=="1"){
		int mmmm=monster();
		if(mmmm==1){
			goto ma;
		}
	}
	else if(cho=="2"){
		return 1;
	}
	else{
		cout << "ERROR\n";
		goto ma;
	}
}
int user(){     //���a��T
 	uu:
 	system("cls");
	int i;
	int S=0,P=0,W=0;
	ATK=ATK+ab[0]*5;
	MAG=MAG+ab[1]*5;
	DEF=DEF+ab[2]*5;
	AGI=AGI+ab[3]*10;
	HP=HP+ab[4]*100;
	MP=MP+ab[5]*50;
		if(uid=="1"){
			i=0;
			ATK=40+ab[0]*5;
			MAG=MAG+ab[1]*5;
			DEF=50+ab[2]*5;
			AGI=AGI+ab[3]*10;
			HP=HP+ab[4]*100;
			MP=MP+ab[5]*50;
			if(bg[15]==0){
				ATK=ATK+5+WLv[0]*1;
			}
			else if(bg[15]==1){
				ATK=ATK+10+WLv[1]*2;
			}
			else if(bg[15]==2 && bg[16]!=9){
				ATK=ATK+15+WLv[2]*3;
			}
			else if(bg[16]==9 && bg[15]!=2){
				DEF=DEF+10+WLv[9]*5;
			}
			else if(bg[15]==2 && bg[16]==9){//�C�h�M�ˮĪG ����3�� 
				ATK=ATK+15+WLv[2]*3;
				DEF=DEF+10+WLv[9]*5;
				ATK=ATK*3;
				cout << "�ثe�C�h�M�ˮĪG�M�Τ� ���z�����O3��\n" ;
				cout <<" \n";
			}
		}
		if(uid=="2"){
			i=1;
			MAG=40+ab[1]*5;
			ATK=ATK+ab[0]*5;
			AGI=AGI+ab[3]*10;
			HP=HP+ab[4]*100;
			MP=MP+ab[5]*50;
			DEF=25+ab[2]*5;
			if(bg[15]==3){
				MAG=MAG+5+WLv[3]*1;
			}
			else if(bg[15]==4){
				MAG=MAG+10+WLv[4]*2;
			}
			else if(bg[15]==5 && bg[16]!=10){
				MAG=MAG+15+WLv[5]*3;
			}
			else if(bg[16]==10 && bg[15]!=5){
				DEF=DEF+10+WLv[10]*2;
			}
			else if(bg[15]==5 && bg[16]==10){//�k�v�M�ˮĪG �]��3�� 
				MAG=MAG+15+WLv[5]*3;
				DEF=DEF+10+WLv[10]*2;
				MAG=MAG*3;
				cout << "�ثe�k�v�M�ˮĪG�M�Τ� �]�k�����O3��\n" ;
				cout <<" \n";
			}
		}
		if(uid=="3"){
			i=2;
			ATK=20+ab[0]*5;
			MAG=20+ab[1]*5;
			DEF=35+ab[2]*5;
			AGI=AGI+ab[3]*10;
			HP=HP+ab[4]*100;
			MP=MP+ab[5]*50;
			if(bg[15]==6){
				ATK=ATK+2+WLv[6]*1;
				MAG=MAG+2+WLv[6]*1;
			}
			else if(bg[15]==7){
				ATK=ATK+5+WLv[7]*2;
				MAG=MAG+5+WLv[7]*2;
			}
			else if(bg[15]==8 && bg[16]!=11){
				ATK=ATK+8+WLv[8]*1;
				MAG=MAG+8+WLv[8]*1;
			}
			else if(bg[16]==11 && bg[15]!=8){
				DEF=DEF+10+WLv[11]*2;
			}
			else if(bg[15]==8 && bg[16]==11){//����M�ˮĪG ����2�� �]��2�� 
				ATK=ATK+8+WLv[8]*1;
				MAG=MAG+8+WLv[8]*1;
				DEF=DEF+10+WLv[11]*2;
				ATK=ATK*2;
				MAG=MAG*2;
				cout << "�ثe����M�ˮĪG�M�Τ� ���z�����O2���M�]�k�����O2��\n" ;
				cout <<" \n";
			}
		}
		
	
	
	cout << "¾�~�G"<< job[i] << "\n";
	cout << " \n";
	cout << ability[0] << "�G" << ATK << "\n";
	cout << " \n";
	cout << ability[1] << "�G" << MAG << "\n";
	cout << " \n";
	cout << ability[2] << "�G" << DEF << "\n";
	cout << " \n";
	cout << ability[3] << "�G" << AGI << "\n";
	cout << " \n";
	cout << ability[4] << " �G" << HP << "\n";
	cout << " \n";                                                            
	cout << ability[5] << " �G" << MP << "\n";
	cout << " \n";
	cout << "�H�߱o�ޯ�G" ;
	if(i==0){
		if(skt[0]==1 && skt[1]==0){
			cout << sk[0] << endl;
		}
		else if(skt[0]==0 && skt[1]==1){
			cout << sk[1] << endl;
		}
		else if(skt[0]==1 && skt[1]==1){
			cout << sk[0] << "  " << sk[1] << endl;
		}
		else{
			cout << "�L\n" ;
		}
	}
	if(i==1){
		if(skt[2]==1 && skt[3]==0){
			cout << sk[2] << endl;
		}
		else if(skt[2]==0 && skt[3]==1){
			cout << sk[3] << endl;
		}
		else if(skt[2]==1 && skt[3]==1){
			cout << sk[2] << "  " << sk[3] << endl;
		}
		else{
			cout << "�L\n" ;
		}
	}
	if(i==2){
		if(skt[4]==1 && skt[5]==0){
			cout << sk[4] << endl;
		}
		else if(skt[4]==0 && skt[5]==1){
			cout << sk[5] << endl;
		}
		else if(skt[4]==1 && skt[5]==1){
			cout << sk[4] << "  " << sk[5] << endl;
		}
		else{
			cout << "�L\n" ;
		}
	}
	
	cout <<" \n";
	cout <<"1.�ѽ᭶\n";
	cout <<"2.�ޯ୶\n";
	cout <<"3.���ŭ�\n";
	cout <<"0.back\n";
	
	cin >> cho;
	if(cho=="0"){
		return 1;
	}
	else if(cho=="1"){
		int at=att();
		if(at==1){
			goto uu;
		}
	}
	else if(cho=="2"){
		int ss=skill();
		if(ss==1){
			goto uu;
		}
	}
	else if(cho=="3"){
		int sl=rank();
		if(sl==1){
			goto uu;
		}
	}
	else {
		cout << "ERROR\n";
		goto uu;
	}
	
}
int store(){    //�ө��� 
	st:
		system("cls");
	cout << "|                                                 1.�Z����                                                  |\n";
	cout << "|                                                 2.���K�E                                                  |\n";
	cout << "|                                                 3.�D�㩱                                                  |\n";
	cout << "|                                                 4.���}                                                    |\n";
	cin >> cho;
	if(cho == "1"){
		wea:
		cout << "|                                              �w��Ө�Z����                                               |\n";
		cout << "|                                                 1.�ʶR                                                    |\n";
		cout << "|                                                 2.���}                                                    |\n";
		cin >> cho;
		lea:
		if(cho == "1"){
			cout << "|                               �C�h���w      �k�v���w     ���⭭�w      ����                                    |\n";
			cout << "|                               1.��M        4.���       7.���M        $100                                    |\n";
			cout << "|                               2.�ѥؼv���M  5.�]�ɮ�     8.����        $10000                                  |\n";
			cout << "|                               3.�������j��  6.�@������   9.�L����M    $10000000                               |\n";
			cout << "|                                                   0.���}                                                       |\n";
			cin >> cho;
			if(cho == "0"){
				goto wea;
			}
			else if(cho == "1"){
				if(money>=100){
					money=money-100;
					cout << "�ʶR���\" << endl;
					bg[0] = bg[0]+1;
					goto wea;
				}
				else if(money>=100 && bg[0]==1){
					cout << "�w�F�ʶR�W��" << endl;
					goto wea;
				}
				else {
					cout << "�ʶR����" << endl;
					cout << "�l�B����" << endl; 
					goto lea;
				}
			}
			else if(cho == "2"){
				if(money>=10000){
					money=money-10000;
					cout << "�ʶR���\" << endl;
					bg[1] = bg[1]+1;
					goto wea;
				}
				else if(money>=10000 && bg[1]==1){
					cout << "�w�F�ʶR�W��" << endl;
					goto wea;
				}
				else{
					cout << "�ʶR����" << endl;
					cout << "�l�B����" << endl; 
					goto lea;
				}
			}
			else if(cho == "3"){
				if(money>=10000000){
					money=money-10000000;
					cout << "�ʶR���\" << endl;
					bg[2] = bg[2]+1;
					goto wea;
				}
				else if(money>=10000000 && bg[2]==1){
					cout << "�w�F�ʶR�W��" << endl;
					goto wea;
				}
				else{
					cout << "�ʶR����" << endl;
					cout << "�l�B����" << endl; 
					goto lea;
				}
			}
			else if(cho == "4"){
				if(money>=100){
					money=money-100;
					cout << "�ʶR���\" << endl;
					bg[3] = bg[3]+1;
					goto wea;
				}
				else if(money>=100 && bg[3]==1){
					cout << "�w�F�ʶR�W��" << endl;
					goto wea;
				}
				else{
					cout << "�ʶR����" << endl;
					cout << "�l�B����" << endl; 
					goto lea;
				}
			}
			else if(cho == "5"){
				if(money>=10000){
					money=money-10000;
					cout << "�ʶR���\" << endl;
					bg[4] = bg[4]+1;
					goto wea;
				}
				else if(money>=10000 && bg[4]==1){
					cout << "�w�F�ʶR�W��" << endl;
					goto wea;
				}
				else{
					cout << "�ʶR����" << endl;
					cout << "�l�B����" << endl; 
					goto lea;
				}
			}
			else if(cho == "6"){
				if(money>=10000000){
					money=money-10000000;
					cout << "�ʶR���\" << endl;
					bg[5] = bg[5]+1;
					goto wea;
				}
				else if(money>=10000000 && bg[5]==1){
					cout << "�w�F�ʶR�W��" << endl;
					goto wea;
				}
				else{
					cout << "�ʶR����" << endl;
					cout << "�l�B����" << endl; 
					goto lea;
				}
		
			}
			else if(cho == "7"){
				if(money>=100){
					money=money-100;
					cout << "�ʶR���\" << endl;
					bg[6] = bg[6]+1;
					goto wea;
				}
				else if(money>=100 && bg[6]==1){
					cout << "�w�F�ʶR�W��" << endl;
					goto wea;
				}
				else{
					cout << "�ʶR����" << endl;
					cout << "�l�B����" << endl; 
					goto lea;
				}
		
			}
			else if(cho == "8"){
				if(money>=10000){
					money=money-10000;
					cout << "�ʶR���\" << endl;
					bg[7] = bg[7]+1;
					goto wea;
				}
				else if(money>=10000 && bg[7]==1){
					cout << "�w�F�ʶR�W��" << endl;
					goto wea;
				}
				else{
					cout << "�ʶR����" << endl;
					cout << "�l�B����" << endl; 
					goto lea;
				}
		
			}
			else if(cho == "9"){
				if(money>=10000000){
					money=money-10000000;
					cout << "�ʶR���\" << endl;
					bg[8] = bg[8]+1;
					goto wea;
				}
				else if(money>=10000000 && bg[8]==1){
					cout << "�w�F�ʶR�W��" << endl;
					goto wea;
				}
				else{
					cout << "�ʶR����" << endl;
					cout << "�l�B����" << endl; 
					goto lea;
				}
			}
			else {
				cout << "ERROR\n";
				goto lea;
			}
	    }
	    else if(cho == "2"){
	    	cout << "���¥��{ \n";
			goto st;
	    }
	    else {
	    	cout << "ERROR\n";
	    	goto wea;
		}
	}
	else if(cho == "2"){
		opp:
		cout << "|                                              �w��Ө쥴�K�E                                               |\n";
		cout << "|                                                 1.�ʶR                                                    |\n";
		cout << "|                                                 2.�j��                                                    |\n";
		cout << "|                                                 3.���}                                                    |\n";
		cin >> cho;
		if(cho == "1"){
			op:
			cout << "|                               �C�h���w      �k�v���w     ���⭭�w       ����                                   |\n";
			cout << "|                               10.�@��       11.�k�T      12.����        $100                                   |\n";
			cout << "|                                                 0.���}                                                         |\n";
			cin >> cho;
			if(cho == "10"){
				if(money>=100){
					money=money-100;
					cout << "�ʶR���\" << endl;
					bg[9] = bg[9]+1;
					goto opp;
				}
				else if(money>=100 && bg[9]==1){
					cout << "�w�F�ʶR�W��" << endl;
					goto wea;
				}
				else{
					cout << "�ʶR����" << endl;
					cout << "�l�B����" << endl; 
					goto op;
				}
			}
			else if(cho == "11"){
				if(money>=100){
					money=money-100;
					cout << "�ʶR���\" << endl;
					bg[10] = bg[10]+1;
					goto opp;
				}
				else if(money>=100 && bg[10]==1){
					cout << "�w�F�ʶR�W��" << endl;
					goto wea;
				}
				else{
					cout << "�ʶR����" << endl;
					cout << "�l�B����" << endl; 
					goto op;
				}
			}
			else if(cho == "12"){
				if(money>=100){
					money=money-100;
					cout << "�ʶR���\" << endl;
					bg[11] = bg[11]+1;
					goto opp;
				}
				else if(money>=100 && bg[11]==1){
					cout << "�w�F�ʶR�W��" << endl;
					goto wea;
				}
				else{
					cout << "�ʶR����" << endl;
					cout << "�l�B����" << endl; 
					goto op;
				}
			}
			else if(cho == "0"){
				goto opp;
			}
			else{
					cout << "ERROR\n";
					goto op;
				}
		}
		else if(cho == "2"){
			strr:
			cout << "�п�ܱj�Ƹ˳�\n";
			cout << "0." << item[0] << endl;
			cout << "1." << item[1] << endl;
			cout << "2." << item[2] << endl;
			cout << "3." << item[3] << endl;
			cout << "4." << item[4] << endl;
			cout << "5." << item[5] << endl;
			cout << "6." << item[6] << endl;
			cout << "7." << item[7] << endl;
			cout << "8." << item[8] << endl;
			cout << "9." << item[9] << endl;
			cout << "10." << item[10] << endl;
			cout << "11." << item[11] << endl;
			cout << "B.back" << endl;
			cin >> cho;
			if(cho=="B"){
				goto opp;
			}
			else if(cho=="0"){
				cout << "�ݭn�������G" << obj[3] << "x" << 1+WLv[0]*2 << endl;
				cout << "�O�_�T�{�j�ơH\n";
				cout << "1.�T�{" << "  " << "2.����\n"  ;
				cin >> cho;
				if(cho=="1"){
					if(ob[3]>=1+WLv[0]*2){
						ob[3]=ob[3]-(1+WLv[0]*2);
						cout << ".\n";
						cout << "..\n";
						cout << "...\n";
						cout << "....\n";
						cout << "......\n";
						cout << "�j�Ʀ��\\n";
						WLv[0]=WLv[0]+1;
						goto strr;
					}
					else if(ob[3]<1+WLv[0]*2){
						cout << "�L�k�j��\n";
						cout << "��������\n";
						goto strr;
					}
				}
				else if(cho=="2"){
					goto strr;
				}
				else{
					cout << "ERROR\n";
					goto strr;
				}
			} 
			else if(cho=="1"){
				cout << "�ݭn�������G" << obj[0] << "x" << 1+WLv[1]*2 << endl;
				cout << "�O�_�T�{�j�ơH\n";
				cout << "1.�T�{" << "  " << "2.����\n"  ;
				cin >> cho;
				if(cho=="1"){
					if(ob[0]>=1+WLv[1]*2){
						ob[0]=ob[0]-(1+WLv[1]*2);
						cout << ".\n";
						cout << "..\n";
						cout << "...\n";
						cout << "....\n";
						cout << "......\n";
						cout << "�j�Ʀ��\\n";
						WLv[1]=WLv[1]+1;
						goto strr;
					}
					else if(ob[0]<1+WLv[1]*2){
						cout << "�L�k�j��\n";
						cout << "��������\n";
						goto strr;
					}
				}
				else if(cho=="2"){
					goto strr;
				}
				else{
					cout << "ERROR\n";
					goto strr;
				}
			}
			else if(cho=="2"){
				cout << "�ݭn�������G" << obj[0] << "x" << 1+WLv[2]*2 << "  " << obj[2] << "x" << 1+WLv[2]*2  << endl;
				cout << "�O�_�T�{�j�ơH\n";
				cout << "1.�T�{" << "  " << "2.����\n";
				cin >> cho;
				if(cho=="1"){
					if(ob[0]>=1+WLv[2]*2 && ob[2]>=1+WLv[2]*2){
						ob[0]=ob[0]-(1+WLv[2]*2);
						ob[2]=ob[2]-(1+WLv[2]*2);
						cout << ".\n";
						cout << "..\n";
						cout << "...\n";
						cout << "....\n";
						cout << "......\n";
						cout << "�j�Ʀ��\\n";
						WLv[2]=WLv[2]+1;
						goto strr;
					}
					else {
						cout << "�L�k�j��\n";
						cout << "��������\n";
						goto strr;
					}
				}
				else if(cho=="2"){
					goto strr;
				}
				else{
					cout << "ERROR\n";
					goto strr;
				}
			}
			else if(cho=="3"){
				cout << "�ݭn�������G" << obj[3] << "x" << 1+WLv[3]*2 << endl;
				cout << "�O�_�T�{�j�ơH\n";
				cout << "1.�T�{" << "  " << "2.����\n"  ;
				cin >> cho;
				if(cho=="1"){
					if(ob[3]>=1+WLv[3]*2){
						ob[3]=ob[3]-(1+WLv[3]*2);
						cout << ".\n";
						cout << "..\n";
						cout << "...\n";
						cout << "....\n";
						cout << "......\n";
						cout << "�j�Ʀ��\\n";
						WLv[3]=WLv[3]+1;
						goto strr;
					}
					else if(ob[3]<1+WLv[3]*2){
						cout << "�L�k�j��\n";
						cout << "��������\n";
						goto strr;
					}
				}
				else if(cho=="2"){
					goto strr;
				}
				else{
					cout << "ERROR\n";
					goto strr;
				}
			}
			else if(cho=="4"){
				cout << "�ݭn�������G" << obj[1] << "x" << 1+WLv[4]*2 << endl;
				cout << "�O�_�T�{�j�ơH\n";
				cout << "1.�T�{" << "  " << "2.����\n"  ;
				cin >> cho;
				if(cho=="1"){
					if(ob[1]>=1+WLv[4]*2){
						ob[1]=ob[4]-(1+WLv[4]*2);
						cout << ".\n";
						cout << "..\n";
						cout << "...\n";
						cout << "....\n";
						cout << "......\n";
						cout << "�j�Ʀ��\\n";
						WLv[4]=WLv[4]+1;
						goto strr;
					}
					else if(ob[1]<1+WLv[4]*2){
						cout << "�L�k�j��\n";
						cout << "��������\n";
						goto strr;
					}
				}
				else if(cho=="2"){
					goto strr;
				}
				else{
					cout << "ERROR\n";
					goto strr;
				}
			}
			else if(cho=="5"){
				cout << "�ݭn�������G" << obj[1] << "x" << 1+WLv[5]*2 << " " << obj[2] << "x" << 1+WLv[5]*2 << endl;
				cout << "�O�_�T�{�j�ơH\n";
				cout << "1.�T�{" << "  " << "2.����\n"  ;
				cin >> cho;
				if(cho=="1"){
					if(ob[1]>=1+WLv[5]*2 && ob[2]>=1+WLv[5]*2 ){
						ob[1]=ob[1]-(1+WLv[5]*2);
						ob[2]=ob[2]-(1+WLv[5]*2);
						cout << ".\n";
						cout << "..\n";
						cout << "...\n";
						cout << "....\n";
						cout << "......\n";
						cout << "�j�Ʀ��\\n";
						WLv[5]=WLv[5]+1;
						goto strr;
					}
					else {
						cout << "�L�k�j��\n";
						cout << "��������\n";
						goto strr;
					}
				}
				else if(cho=="2"){
					goto strr;
				}
				else{
					cout << "ERROR\n";
					goto strr;
				}
			}
			else if(cho=="6"){
				cout << "�ݭn�������G" << obj[3] << "x" << 1+WLv[6]*2 << endl;
				cout << "�O�_�T�{�j�ơH\n";
				cout << "1.�T�{" << "  " << "2.����\n"  ;
				cin >> cho;
				if(cho=="1"){
					if(ob[3]>=1+WLv[6]*2){
						ob[3]=ob[3]-(1+WLv[6]*2);
						cout << ".\n";
						cout << "..\n";
						cout << "...\n";
						cout << "....\n";
						cout << "......\n";
						cout << "�j�Ʀ��\\n";
						WLv[6]=WLv[6]+1;
						goto strr;
					}
					else if(ob[3]<1+WLv[6]*2){
						cout << "�L�k�j��\n";
						cout << "��������\n";
						goto strr;
					}
				}
				else if(cho=="2"){
					goto strr;
				}
				else{
					cout << "ERROR\n";
					goto strr;
				}
			}
			else if(cho=="7"){
				cout << "�ݭn�������G" << obj[0] << "x" << 1+WLv[7]*2 << endl;
				cout << "�O�_�T�{�j�ơH\n";
				cout << "1.�T�{" << "  " << "2.����\n"  ;
				cin >> cho;
				if(cho=="1"){
					if(ob[0]>=1+WLv[7]*2){
						ob[0]=ob[0]-(1+WLv[7]*2);
						cout << ".\n";
						cout << "..\n";
						cout << "...\n";
						cout << "....\n";
						cout << "......\n";
						cout << "�j�Ʀ��\\n";
						WLv[7]=WLv[7]+1;
						goto strr;
					}
					else if(ob[0]<1+WLv[7]*2){
						cout << "�L�k�j��\n";
						cout << "��������\n";
						goto strr;
					}
				}
				else if(cho=="2"){
					goto strr;
				}
				else{
					cout << "ERROR\n";
					goto strr;
				}
			}
			else if(cho=="8"){
				cout << "�ݭn�������G" << obj[2] << "x" << 1+WLv[8]*2 << "  " << obj[0] << "x" << 1+WLv[8]*2 << "  " << obj[1] << "x" << 1+WLv[8]*2 << endl;
				cout << "�O�_�T�{�j�ơH\n";
				cout << "1.�T�{" << "  " << "2.����\n"  ;
				cin >> cho;
				if(cho=="1"){
					if(ob[0]>=1+WLv[8]*2 && ob[1]>=1+WLv[8]*2 && ob[2]>=1+WLv[8]*2){
						ob[0]=ob[0]-(1+WLv[8]*2);
						ob[1]=ob[1]-(1+WLv[8]*2);
						ob[2]=ob[2]-(1+WLv[8]*2);
						cout << ".\n";
						cout << "..\n";
						cout << "...\n";
						cout << "....\n";
						cout << "......\n";
						cout << "�j�Ʀ��\\n";
						WLv[8]=WLv[8]+1;
						goto strr;
					}
					else {
						cout << "�L�k�j��\n";
						cout << "��������\n";
						goto strr;
					}
				}
				else if(cho=="2"){
					goto strr;
				}
				else{
					cout << "ERROR\n";
					goto strr;
				}
			}
			else if(cho=="9"){
				cout << "�ݭn�������G" << obj[0] << "x" << 1+WLv[9]*2 << endl;
				cout << "�O�_�T�{�j�ơH\n";
				cout << "1.�T�{" << "  " << "2.����\n"  ;
				cin >> cho;
				if(cho=="1"){
					if(ob[0]>=1+WLv[9]*2){
						ob[0]=ob[0]-(1+WLv[9]*2);
						cout << ".\n";
						cout << "..\n";
						cout << "...\n";
						cout << "....\n";
						cout << "......\n";
						cout << "�j�Ʀ��\\n";
						WLv[7]=WLv[7]+1;
						goto strr;
					}
					else if(ob[0]<1+WLv[9]*2){
						cout << "�L�k�j��\n";
						cout << "��������\n";
						goto strr;
					}
				}
				else if(cho=="2"){
					goto strr;
				}
				else{
					cout << "ERROR\n";
					goto strr;
				}
			}
			else if(cho=="10"){
				cout << "�ݭn�������G" << obj[0] << "x" << 1+WLv[10]*2 << endl;
				cout << "�O�_�T�{�j�ơH\n";
				cout << "1.�T�{" << "  " << "2.����\n"  ;
				cin >> cho;
				if(cho=="1"){
					if(ob[0]>=1+WLv[10]*2){
						ob[0]=ob[0]-(1+WLv[10]*2);
						cout << ".\n";
						cout << "..\n";
						cout << "...\n";
						cout << "....\n";
						cout << "......\n";
						cout << "�j�Ʀ��\\n";
						WLv[10]=WLv[10]+1;
						goto strr;
					}
					else if(ob[0]<1+WLv[10]*2){
						cout << "�L�k�j��\n";
						cout << "��������\n";
						goto strr;
					}
				}
				else if(cho=="2"){
					goto strr;
				}
				else{
					cout << "ERROR\n";
					goto strr;
				}
			}
			else if(cho=="11"){
				cout << "�ݭn�������G" << obj[0] << "x" << 1+WLv[11]*2 << endl;
				cout << "�O�_�T�{�j�ơH\n";
				cout << "1.�T�{" << "  " << "2.����\n"  ;
				cin >> cho;
				if(cho=="1"){
					if(ob[0]>=1+WLv[11]*2){
						ob[0]=ob[0]-(1+WLv[11]*2);
						cout << ".\n";
						cout << "..\n";
						cout << "...\n";
						cout << "....\n";
						cout << "......\n";
						cout << "�j�Ʀ��\\n";
						WLv[7]=WLv[7]+1;
						goto strr;
					}
					else if(ob[0]<1+WLv[11]*2){
						cout << "�L�k�j��\n";
						cout << "��������\n";
						goto strr;
					}
				}
				else if(cho=="2"){
					goto strr;
				}
				else{
					cout << "ERROR\n";
					goto strr;
				}
			}
			else{
					cout << "ERROR\n";
					goto strr;
				}
		} 
		else if(cho == "3"){
			cout << "���¥��{ \n";
			goto st;
		}
	} 
	else if(cho == "3"){
		it:
		cout << "|                                              �w��Ө�D�㩱                                               |\n";
		cout << "|                                                 1.�ʶR                                                    |\n";
		cout << "|                                                 2.���}                                                    |\n";
		cin >> cho;
		if(cho == "1"){
			itt:
			cout << "|                                                                         ����                              |\n";
			cout << "|                                                    13.HP�Ĥ�            $150                              |\n";
			cout << "|                                                    14.MP�Ĥ�            $150                              |\n";
			cout << "|                                                    15.�t��              $3000                             |\n";
			cout << "|                                                    0.���}                                                 |\n";
			cin >> cho;
			if(cho == "13"){
				if(money>=150){
					money=money-150;
					cout << "�ʶR���\" << endl;
					bg[12] = bg[12]+1;
					goto it;
				}
				else{
					cout << "�ʶR����" << endl;
					cout << "�l�B����" << endl; 
					goto itt;
				}
			}
			else if(cho == "14"){
				if(money>=150){
					money=money-150;
					cout << "�ʶR���\" << endl;
					bg[13] = bg[13]+1;
					goto it;
				}
				else{
					cout << "�ʶR����" << endl;
					cout << "�l�B����" << endl; 
					goto itt;
				}
			}
			else if(cho == "15"){
				if(money>=3000){
					money=money-3000;
					cout << "�ʶR���\" << endl;
					bg[14] = bg[14]+1;
					goto it;
				}
				else{
					cout << "�ʶR����" << endl;
					cout << "�l�B����" << endl; 
					goto itt;
				}
			}
			else if(cho == "0"){
				goto it;
			}
			else{
				cout << "ERROR\n";
				goto itt;
			}
		}
		else if(cho == "2"){
			cout << "���¥��{ \n";
			goto st;
		}
		else{
			cout << "ERROR\n";
			goto it;
		}
	}
	else if(cho == "4"){
		cout << "�A���}�F�ө��� \n";
		return 1; 
	}
	else{
		cout << "ERROR\n";
		goto st;
	}
}
int bag(){      //�]�] 
	bb:
		int bw,bbb;
		system("cls");
	cout << " ___________________________________________________________________________________________________________ \n";
	cout << "|***********************************************************************************************************|\n";
	cout << "|===========================================================================================================|\n";
	cout << "|+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|\n";
	cout << "|-------------------------------------------------      ====================================================|\n";
	cout << "|                                                 E.�˳�                                                    |\n";
	cout << "|                                                 C.�d�ݫ�����                                              |\n";
	cout << "|                                                 B.���}                                                    |\n";
	cout << "|=================================================      ----------------------------------------------------|\n";
	cout << "|+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|\n";
	cout << "|-----------------------------------------------------------------------------------------------------------|\n";
	cout << "|***********************************************************************************************************|\n";
	cout << "|___________________________________________________________________________________________________________|\n";
	cin >> cho;
	if(cho == "E"){
		ww:
		if(bg[15]==9){
			hand="�L";
		}
		if(bg[15]==0){
			hand="��M";
		}
		if(bg[15]==1){
			hand="�ѥؼv���M";
		}
		if(bg[15]==2){
			hand="�������j��";
		}
		if(bg[15]==3){
			hand="���";
		}
		if(bg[15]==4){
			hand="�]�ɮ�";
		}
		if(bg[15]==5){
			hand="�@������";
		}
		if(bg[15]==6){
			hand="���M";
		}
		if(bg[15]==7){
			hand="����";
		}
		if(bg[15]==8){
			hand="�L����M";
		}
		if(bg[16]==0){
			body="�L";
		}
		if(bg[16]==9){
			body="�@��";
		}
		if(bg[16]==10){
			body="�k�T";
		}
		if(bg[16]==11){
			body="����";
		}
		
		//system("cls");
		pop:
		cout << " �ثe�˳�-��W�G" << hand << endl ;
		cout << " �ثe�˳�-���W�G" << body << endl ; 
		
		cout << " 1.��� ��W��\n";
		cout << " 2.��� ���W��\n";
		cout << " B.���}\n";
		cin >> cho;
		if(cho == "1"){
			cp:
			cout << " �ثe�˳�-��W�G" << hand << endl ;
			cout << " 0.�G" << item[0] << endl ;
			cout << " 1.�G" << item[1] << endl ;
			cout << " 2.�G" << item[2] << endl ;
			cout << " 3.�G" << item[3] << endl ;
			cout << " 4.�G" << item[4] << endl ;
			cout << " 5.�G" << item[5] << endl ;
			cout << " 6.�G" << item[6] << endl ;
			cout << " 7.�G" << item[7] << endl ;
			cout << " 8.�G" << item[8] << endl ;
			cout << " 9.�G" << "�h�U�˳�" << endl ;
			cin >> cho;
			if(cho=="9"){
				if(bg[15]==9){
					cout << "�˳Ƥw�h�U" <<  endl ;
					bg[15]=9;
					goto ww;
				}
				else{
					cout << "�˳Ƥw�h�U" <<  endl ;
					bg[15]=9;
					bg[bw]=bg[bw]+1;
					goto ww;
				}
			}
			//sword 
			if(uid=="1"){
				if(cho=="0"){
					if(bg[0]>=1){
						cout << "�˳Ʀ��\\n";
						cout << "�˳Ƥw�󴫦�" << item[0] << endl ; 
						bg[15]=0;
						bg[0]=bg[0]-1;
						bw=0;
						goto ww;
					}
					else{
						cout << "�˳ƥ���\n";
						cout << "�������˳�" << endl ;
						goto ww;
					}
				}
				else if(cho=="1" && Lv>=5){
					if(bg[1]>=1){
						cout << "�˳Ʀ��\\n";
						cout << "�˳Ƥw�󴫦�" << item[1] << endl; 
						bg[15]=1;
						bg[1]=bg[1]-1;
						bw=1;
						goto ww;
					}
					else{
						cout << "�˳ƥ���\n";
						cout << "�������˳�" << endl ;
						goto ww;
					}
				}
				else if(cho=="2" && Lv>=10){
					if(bg[2]>=1){
						cout << "�˳Ʀ��\\n";
						cout << "�˳Ƥw�󴫦�" << item[2]<< endl; 
						bg[15]=2;
						bg[2]=bg[2]-1;
						bw=2;
						goto ww;
					}
					else{
						cout << "�˳ƥ���\n";
						cout << "�������˳�" << endl ;
						goto ww;
					}
				}
				else if( cho=="1" && Lv < 5){
					cout << "�˳ƥ���\n";
					cout << "���Ť���" << endl; 
					goto ww;
				}
				else if(cho=="2" && Lv < 10){
					cout << "�˳ƥ���\n";
					cout << "���Ť���" << endl; 
					goto ww;
				}
				else if(cho=="3" || cho=="4" || cho=="5" || cho=="6" || cho=="7" || cho=="8"){
					cout << "�˳ƥ���\n";
					cout << "¾�~����" << endl; 
					goto ww;
				}
				else {
					cout << "ERROR\n";
					goto cp;
				}
			}
			//wizard
			if(uid=="2"){
				if(cho=="3"){
					if(bg[3]>=1){
						cout << "�˳Ʀ��\\n";
						cout << "�˳Ƥw�󴫦�" << item[3] << endl ; 
						bg[15]=3;
						bg[3]=bg[3]-1;
						bw=3;
						goto ww;
					}
					else{
						cout << "�˳ƥ���\n";
						cout << "�������˳�" << endl ;
						goto ww;
					}
				}
				else if(cho=="4" && Lv>=5){
					if(bg[4]>=1){
						cout << "�˳Ʀ��\\n";
						cout << "�˳Ƥw�󴫦�" << item[4] << endl ; 
						bg[15]=4;
						bg[4]=bg[4]-1;
						bw=4;
						goto ww;
					}
					else{
						cout << "�˳ƥ���\n";
						cout << "�������˳�" << endl ;
						goto ww;
					}
				}
				else if(cho=="5" && Lv>=10){
					if(bg[5]>=1){
						cout << "�˳Ʀ��\\n";
						cout << "�˳Ƥw�󴫦�" << item[5] << endl ; 
						bg[15]=5;
						bg[5]=bg[5]-1;
						bw=5;
						goto ww;
					}
					else{
						cout << "�˳ƥ���\n";
						cout << "�������˳�" << endl ;
						goto ww;
					}
				}
				else if( cho=="4" && Lv < 5){
					cout << "�˳ƥ���\n";
					cout << "���Ť���" << endl; 
					goto ww;
				}
				else if(cho=="5" && Lv < 10){
					cout << "�˳ƥ���\n";
					cout << "���Ť���" << endl; 
					goto ww;
				}
				else if(cho=="0" || cho=="1" || cho=="2" || cho=="6" || cho=="7" || cho=="8"){
					cout << "�˳ƥ���\n";
					cout << "¾�~����" << endl; 
					goto ww;
				}
				else {
					cout << "ERROR\n";
					goto cp;
				}
			}
			//punch
			if(uid=="3"){
				if(cho=="6"){
					if(bg[6]>=1){
						cout << "�˳Ʀ��\\n";
						cout << "�˳Ƥw�󴫦�" << item[6] << endl ; 
						bg[15]=6;
						bg[6]=bg[6]-1;
						bw=6;
						goto ww;
					}
					else{
						cout << "�˳ƥ���\n";
						cout << "�������˳�" << endl ;
						goto ww;
					}
				}
				else if(cho=="7" && Lv>=5){
					if(bg[7]>=1){
						cout << "�˳Ʀ��\\n";
						cout << "�˳Ƥw�󴫦�" << item[7] << endl ; 
						bg[15]=7;
						bg[7]=bg[7]-1;
						bw=7;
						goto ww;
					}
					else{
						cout << "�˳ƥ���\n";
						cout << "�������˳�" << endl ;
						goto ww;
					}
				}
				else if(cho=="8" && Lv>=10){
					if(bg[8]>=1){
						cout << "�˳Ʀ��\\n";
						cout << "�˳Ƥw�󴫦�" << item[8] << endl ; 
						bg[15]=8;
						bg[8]=bg[8]-1;
						bw=8;
						goto ww;
					}
					else{
						cout << "�˳ƥ���\n";
						cout << "�������˳�" << endl ;
						goto ww;
					}
				}
				else if( cho=="7" && Lv < 5){
					cout << "�˳ƥ���\n";
					cout << "���Ť���" << endl; 
					goto ww;
				}
				else if(cho=="8" && Lv < 10){
					cout << "�˳ƥ���\n";
					cout << "���Ť���" << endl; 
					goto ww;
				}
				else if(cho=="3" || cho=="4" || cho=="5" || cho=="0" || cho=="1" || cho=="2"){
					cout << "�˳ƥ���\n";
					cout << "¾�~����" << endl; 
					goto ww;
				}
				else {
					cout << "ERROR\n";
					goto cp;
				}
			}
	    }
	    else if(cho == "2"){
	    	cb:
			cout << " �ثe�˳�-���W�G" << body << endl ;
			cout << " 0.�G" << "�h�U�˳�" << endl ;
			cout << " 1.�G" << item[9] << endl ;
			cout << " 2.�G" << item[10] << endl ;
			cout << " 3.�G" << item[11] << endl ; 
			cin >> cho;
			if(cho=="0"){
				if(bg[16]==0){
					cout << "�˳Ƥw�h�U" <<  endl ;
					bg[16]=0;
					goto ww;
				}
				else{
					cout << "�˳Ƥw�h�U" <<  endl ;
					bg[16]=0;
					bg[bbb]=bg[bbb]+1;
					goto ww;
				}
			}
			if(uid=="1"){
				if(cho=="1"){
					if(bg[9]>=1){
						cout << "�˳Ʀ��\\n";
						cout << "�˳Ƥw�󴫦�" << item[9] << endl ; 
						bg[16]=9;
						bg[9]=bg[9]-1;
						bbb=0;
						goto ww;
					}
					else{
						cout << "�˳ƥ���\n";
						cout << "�������˳�" << endl ;
						goto ww;
					}
				}
				else if(cho=="2" || cho=="3"){
					cout << "�˳ƥ���\n";
					cout << "¾�~����" << endl; 
					goto ww;
				}
				else{
					cout << "ERROR\n";
					goto cb;
				}
			}
			if(uid=="2"){
				if(cho=="2"){
					if(bg[10]>=1){
						cout << "�˳Ʀ��\\n";
						cout << "�˳Ƥw�󴫦�" << item[10] << endl ; 
						bg[16]=10;
						bg[10]=bg[10]-1;
						bbb=10;
						goto ww;
					}
					else{
						cout << "�˳ƥ���\n";
						cout << "�������˳�" << endl ;
						goto ww;
					}
				}
				else if(cho=="1" || cho=="3"){
					cout << "�˳ƥ���\n";
					cout << "¾�~����" << endl; 
					goto ww;
				}
				else{
					cout << "ERROR\n";
					goto cb;
				}
			}
			if(uid=="3"){
				if(cho=="3"){
					if(bg[11]>=1){
						cout << "�˳Ʀ��\\n";
						cout << "�˳Ƥw�󴫦�" << item[11] << endl ; 
						bg[16]=11;
						bg[11]=bg[11]-1;
						bbb=11;
						goto ww;
					}
					else{
						cout << "�˳ƥ���\n";
						cout << "�������˳�" << endl ;
						goto ww;
					}
				}
				else if(cho=="2" || cho=="1"){
					cout << "�˳ƥ���\n";
					cout << "¾�~����" << endl; 
					goto ww;
				}
				else{
					cout << "ERROR\n";
					goto cb;
				}
			}
	    }
	    else if(cho == "B"){
			goto bb;
		}
		else {
			cout << "ERROR\n";
			goto pop;
		}
		
	}
	else if(cho == "C"){
		system("cls");
		cout << " ___________________________________________________________________________________________________________ \n";
		cout << "|          �@                                                                                               |\n";
		cout << "|      " << "��M�G" << bg[0] << "                              " << "�ѥؼv���M�G" << bg[1] << "                             " << "�������j���G" << bg[2] << "         |\n";
		cout << "|                                                                                                           |\n";
		cout << "|      " << "����G" << bg[3] << "                              " << "�]�ɮѡG" << bg[4] << "                                 " << "�@�������G" << bg[5] << "           |\n";
		cout << "|                                                                                                           |\n";
		cout << "|      " << "���M�G" << bg[6] << "                              " << "����G" << bg[7] << "                                   " << "�L����M�G" << bg[8] << "           |\n";
		cout << "|                                                                                                           |\n";
		cout << "|      " << "�@�ҡG" << bg[9] << "                              " << "�k�T�G" << bg[10] << "                                   " << "���ǡG" << bg[11] << "               |\n";
		cout << "|                                                                                                           |\n";
		cout << "|      " << "HP�Ĥ��G" << bg[12] << "                            " << "MP�Ĥ��G" << bg[13] << "                                 " << "�t���G" << bg[14] << "               |\n";
	 	cout << "|                                                                                                           |\n";
	 	cout << "|      " << obj[0] << "�G" << ob[0] << "                            " << obj[1] <<"�G" << ob[1] << "                                 " << obj[2] <<"�G" << ob[2] << "             |\n";
	 	cout << "|                                                                                                           |\n";
	 	cout << "|      " << obj[3] << "�G" << ob[3] << "                              " << obj[4] <<"�G" << ob[4] << "                                                           |\n";
	 	cout << "|                                                                                                           |\n";
		cout << "|money�G$"<< money <<"                                                                                         B.���}|\n";
		cout << "|___________________________________________________________________________________________________________|\n";
		ccc:
		cin >> cho;
		if(cho == "B"){
			goto bb;
		}
		else{
			cout << "ERROR\n";
			goto ccc;
			
		}
	}
	else if(cho == "B"){
		return 1;
	}
	else {
		cout << "ERROR\n";
		goto bb;
	}
}
int map(){      //�a�� 
	string MAP[6]{"�_�l����","�a�U����-�ک��R","���Ԥj�˪L","�B��g�c-�㮦���ԯS","�����","����q"};
	
	string ac;
	string pw;
	
		// Open file
		ifstream myFile;
		myFile.open("data.txt", ios::app);
		// Print file content
		while (myFile >> ac >> pw){
			
			// Open file
			fstream inFile;
			inFile.open("map.txt", ios::app);
			// Write to the file
			inFile << ac << " " << uid  << " "  << locate << "\n";
			// Close file
			inFile.close();
		}
		// Close file
		myFile.close();
		start:
		system("cls");
	cout << "|                                           1.�a�U����-�ک��R                                               |\n";
	cout << "|                                                   |                                                       |\n";
	cout << "|                                                   |                                                       |\n";
	cout << "|                                                   |                                                       |\n";
	cout << "|                                                   |                                                       |\n";
	cout << "|                           2.���Ԥj�˪L---------0.�_�l����--------4.�����--------5.����q                 |\n";
	cout << "|                                                   |                                                       |\n";
	cout << "|                                                   |                                                       |\n";
	cout << "|                                                   |                                                       |\n";
	cout << "|                                                   |                                                       |\n";
	cout << "|                                         3.�B��g�c-�㮦���ԯS                                             |\n";
	cout << "                                                                                                             \n";
	cout << "|                                    N.�Ҧb��m M.���� TP.�ǰe B.���}                                       |\n";
	
	cin >> cho;
	if(cho == "N"){
		if(locate == 0){
			cout << "�ثe�Ҧb��m�G" << endl ;
			cout << "�_�l����" << endl ;
		}
		if(locate == 1){
			cout << "�ثe�Ҧb��m�G" << endl ;
			cout << "�a�U����-�ک��R" << endl ;
		}
		if(locate == 2){
			cout << "�ثe�Ҧb��m�G" << endl ;
			cout << "���Ԥj�˪L" << endl ;
		}
		if(locate == 3){
			cout << "�ثe�Ҧb��m�G" << endl ;
			cout << "�B��g�c-�㮦���ԯS" << endl ;
		}
		if(locate == 4){
			cout << "�ثe�Ҧb��m�G" << endl ;
			cout << "�����" << endl ;
		}
		if(locate == 5){
			cout << "�ثe�Ҧb��m�G" << endl ;
			cout << "����q" << endl ;
		}
		_sleep(2000);
		goto start;
	}
	else if(cho == "M"){
		if(locate == 0){
			mmm:
			cout << "�W�GW" << " " << "�U�GS" << " " << "���GA" << " " << "�k�GD" << endl;
			cin >> cho ;
			if(cho == "W"){
				cout << "���ʦܡG" << MAP[1] << endl;
				cout << "���ʧ���\n"  ;
				locate = 1;
				
			}
			else if(cho == "A"){
				cout << "���ʦܡG" << MAP[2] << endl;
				cout << "���ʧ���\n"  ;
				locate = 2;
			}
			else if(cho == "S"){
				cout << "���ʦܡG" << MAP[3] << endl;
				cout << "���ʧ���\n"  ;
				locate = 3;
			}
			else if(cho == "D"){
				cout << "���ʦܡG" << MAP[4] << endl;
				cout << "���ʧ���\n"  ;
				locate = 4;
			}
			else{
				cout << "ERROR\n";
				goto mmm;
			}
			_sleep(2000);
			goto start;
		}
		else if(locate == 1){
			mm0:
			cout << "�W�GW" << " " << "�U�GS" << " " << "���GA" << " " << "�k�GD" << endl;
			cin >> cho ;
			if(cho == "S"){
				cout << "���ʦܡG" << MAP[0] << endl;
				cout << "���ʧ���\n"  ;
				locate = 0;
			}
			else if(cho == "W"){
				cout << "���B�L�k�e��\n";
				goto mm0;
			}
			else if(cho == "A"){
				cout << "���B�L�k�e��\n";
				goto mm0;
			}
			else if(cho == "D"){
				cout << "���B�L�k�e��\n";
				goto mm0;
			}
			else{
				cout << "ERROR\n";
				goto mm0;
			}
			_sleep(2000);
			goto start;
		}
		else if(locate == 2){
			mm1:
			cout << "�W�GW" << " " << "�U�GS" << " " << "���GA" << " " << "�k�GD" << endl;
			cin >> cho ;
			if(cho == "D"){
				cout << "���ʦܡG" << MAP[0] << endl;
				cout << "���ʧ���\n"  ;
				locate = 0;
			}
			else if(cho == "W"){
				cout << "���B�L�k�e��\n";
				goto mm1;
			}
			else if(cho == "A"){
				cout << "���B�L�k�e��\n";
				goto mm1;
			}
			else if(cho == "S"){
				cout << "���B�L�k�e��\n";
				goto mm1;
			}
			else{
				cout << "ERROR\n";
				goto mm1;
			}
			_sleep(2000);
			goto start;
		}
		else if(locate == 3){
			mm2:
			cout << "�W�GW" << " " << "�U�GS" << " " << "���GA" << " " << "�k�GD" << endl;
			cin >> cho ;
			if(cho == "W"){
				cout << "���ʦܡG" << MAP[0] << endl;
				cout << "���ʧ���\n"  ;
				locate = 0;
			}
			else if(cho == "D"){
				cout << "���B�L�k�e��\n";
				goto mm2;
			}
			else if(cho == "A"){
				cout << "���B�L�k�e��\n";
				goto mm2;
			}
			else if(cho == "S"){
				cout << "���B�L�k�e��\n";
				goto mm2;
			}
			else{
				cout << "ERROR\n";
				goto mm2;
			}
			_sleep(2000);
			goto start;
		}
		else if(locate == 4){
			mm3:
			cout << "�W�GW" << " " << "�U�GS" << " " << "���GA" << " " << "�k�GD" << endl;
			cin >> cho ;
			if(cho == "A"){
				cout << "���ʦܡG" << MAP[0] << endl;
				cout << "���ʧ���\n"  ;
				locate = 0;
			}
			else if(cho == "D"){
				cout << "���ʦܡG" << MAP[5] << endl;
				cout << "���ʧ���\n"  ;
				locate = 5;
			}
			else if(cho == "W"){
				cout << "���B�L�k�e��\n";
				goto mm3;
			}
			else if(cho == "S"){
				cout << "���B�L�k�e��\n";
				goto mm3;
			}
			else{
				cout << "ERROR\n";
				goto mm3;
			}
			_sleep(2000);
			goto start;
		}
		else if(locate == 5){
			mm4:
			cout << "���GA" << " " << endl;
			cin >> cho ;
			if(cho == "A"){
				cout << "���ʦܡG" << MAP[4] << endl;
				cout << "���ʧ���\n"  ;
				locate = 4;
			}
			else if(cho == "W"){
				cout << "���B�L�k�e��\n";
				goto mm4;
			}
			else if(cho == "S"){
				cout << "���B�L�k�e��\n";
				goto mm4;
			}
			else if(cho == "d"){
				cout << "���B�L�k�e��\n";
				goto mm4;
			}
			else{
				cout << "ERROR\n";
				goto mm4;
			}
			_sleep(2000);
			goto start;
		}
	}
	else if(cho == "TP"){
		mm8:
			int tp;
		cout << "�п�J���e����m�s��" << endl;
		cin >>  cho;
		if(cho =="0"){
			locate=0;
			tp=0;
		}
		else if(cho =="1"){
			locate=1;
			tp=1;
		}
		else if(cho =="2"){
			locate=2;
			tp=2;
		}
		else if(cho =="3"){
			locate=3;
			tp=3;
		}
		else if(cho =="4"){
			locate=4;
			tp=4;
		}
		else if(cho =="5"){
			locate=5;
			tp=5;
		}
		else{
			cout << "ERROR\n";
			goto mm8;
		}
		
		cout << ". " ;
		cout << ".. " ;
		cout << "... " ;
		cout << "�ǰe����" << endl;
		cout << "�w�ǰe��" << MAP[tp] << endl; 
		_sleep(2000);
		
		goto start;
		
	}
	else if(cho == "B"){
		return 1;
	}
	else{
		printf("ERROR\n");
		goto start;	
	}
}
int homedata(){ //�����ާ@ 
	system("cls");
	
	if(locate==0){
		go0:
	cout << "|                                                 1.�ө���                                                  |\n";
	cout << "|                                                 2.�Ŭu                                                    |\n";
	cout << "|                                                 3.�h�X                                                    |\n";
	gooo:
	cin >> cho;
	if(cho == "1"){
		int n=store();
		if(n==1){
			goto go0;	
		}
	}
	else if(cho == "2"){
		hp=HP;
		mp=MP; 
		cout << "�^�_����\n" ; 
			goto gooo;	
		
	}
	else if(cho == "3"){
		return 1;
	}
	else{
		cout << "ERROR\n";
		goto go0;
	}
    }
    if(locate==1){
    	go1:
	cout << "|                                                 1.�a�U��                                                  |\n";
	cout << "|                                                 2.�h�X                                                    |\n";
	cin >> cho;
	if(cho == "1"){
		int d=dig();
		if(d==1){
			goto go1;
		}
	}
	else if(cho == "2"){
		return 1;
	}
	else{
		cout << "ERROR\n";
		goto go1;
	}
    }
    if(locate==2){
    	go2:
	cout << "|                                                 1.�˪L                                                    |\n";
	cout << "|                                                 2.�h�X                                                    |\n";
	cin >> cho;
	if(cho == "1"){
		int t=tree();
		if(t==1){
			goto go2;
		}
	}
	else if(cho == "2"){
		return 1;
	}
	else{
		cout << "ERROR\n";
		goto go2;
	}
    }
    if(locate==3){
    	go3: 
    	if(hp<=0){
			return 1;
		}
	cout << "|                                                 1.�g�c                                                    |\n";
	cout << "|                                                 2.�h�X                                                    |\n";
	cin >> cho;
	if(cho == "1"){
		int m=maze();
		if(m==1){
			goto go3;
		}
	}
	else if(cho == "2"){
		return 1;
	}
	else{
		cout << "ERROR\n";
		goto go3;
	}
    }
    if(locate==4){
    	go4:
	cout << "|                                                 1.�¥�                                                    |\n";
	cout << "|                                                 2.�h�X                                                    |\n";
	cin >> cho;
	if(cho == "1"){
		int bm=bmarket();
		if(bm==1){
			goto go4;
		}
	}
	else if(cho == "2"){
		return 1;
	}
	else{
		cout << "ERROR\n";
		goto go4;
	}
    }
    if(locate==5){
    	go5:
	cout << "|                                                 1.����                                                    |\n";
	cout << "|                                                 2.�h�X                                                    |\n";
	cin >> cho;
	if(cho == "1"){
		int f=fishing();
		if(f==1){
			goto go5;
		}
	}
	if(cho == "2"){
		return 1;
	}
	else{
		cout << "ERROR\n";
		goto go5;
	}
    }
}
int home(){     //�C������ 
	ban:
	system("cls");
	cout << " ___________________________________________________________________________________________________________ \n";
	cout << "|***********************************************************************************************************|\n";
	cout << "|===========================================================================================================|\n";
	cout << "|+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|\n";
	cout << "|-----------------------------------------------           =================================================|\n";
	cout << "|                                               P.���⤶��                                                  |\n";
	cout << "|                                                 B.�I�]                                                    |\n";
	cout << "|                                                 M.�a��                                                    |\n";
	cout << "|                                                 O.�ާ@                                                    |\n";
	cout << "|                                              S.�x�s�ðh�X                                                 |\n";
	cout << "|==============================================            -------------------------------------------------|\n";
	cout << "|+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++|\n";
	cout << "|                                                                                                           |\n";
	cout << "|***********************************************************************************************************|\n";
	cout << "|___________________________________________________________________________________________________________|\n";
    cin >>  cho;
    if(hp<=0 && cho=="M"){
		cout << "��q���� �L�k���� �Х��ܷŬu�^�_���A\n";
		_sleep(500);
		goto ban;
	}
    else if(cho == "P"){
    	int p=user();;
		if(p==1){
        	goto ban;
    	}
	}
	else if(cho == "B"){
		int b=bag();
		if(b==1){
			goto ban;
		}
	}
	else if(cho == "M"){
		int n=map();
		if(n==1){
			goto ban;
		}
	}
	else if(cho == "O"){
		int n=homedata();
		if(n==1){
			goto ban;
		}
	}
	else if(cho == "S"){
		string id,pw;
		string mid;
		string uuid;
		int sv[100];
		int l;
		//USER
		ifstream fin;
		fin.open("data.txt");
    	while (fin >> id >> pw >> uuid 
    	>> sv[0]
		>> sv[1] >> sv[2] >> sv[3] >> sv[4] >> sv[5]
		>> sv[6] >> sv[7] >> sv[8] >> sv[9] >> sv[10]
		>> sv[11] >> sv[12] >> sv[13] >> sv[14] >> sv[15]
		>> sv[16] >> sv[17] >> sv[18] >> sv[19] >> sv[20]
		>> sv[21] >> sv[22] >> sv[23] >> sv[24] >> sv[25]
		>> sv[26] >> sv[27] >> sv[28] >> sv[29] >> sv[30]
		>> sv[31] >> sv[32] >> sv[33] >> sv[34] >> sv[35] 
		>> sv[36] >> sv[37] >> sv[38] >> sv[39] >> sv[40]
		>> sv[41] >> sv[42] >> sv[43] >> sv[44] >> sv[45]
		>> sv[46] >> sv[47] >> sv[48] >> sv[49] >> sv[50]
		>> sv[51] >> sv[52] >> sv[53] >> sv[54] >> sv[55]
		>> sv[56] >> sv[57] >> sv[58] >> sv[59] >> sv[60]
		>> sv[61]  
		 ){
        	if (id==acc && pw==password) {
        		continue;
       		}	
        	else {
           		ofstream fout;
           		fout.open("data0.txt", ios::app);
           		fout << id << " " << pw << " " << uuid 
				<< " " << sv[0]
				<< " " << sv[1] << " " << sv[2] << " " << sv[3] << " " << sv[4] << " " << sv[5]
				<< " " << sv[6] << " " << sv[7] << " " << sv[8] << " " << sv[9] << " " << sv[10]
				<< " " << sv[11] << " " << sv[12] << " " << sv[13] << " " << sv[14] << " " << sv[15]
				<< " " << sv[16] << " " << sv[17] << " " << sv[18] << " " << sv[19] << " " << sv[20]
				<< " " << sv[21] << " " << sv[22] << " " << sv[23] << " " << sv[24] << " " << sv[25]
				<< " " << sv[26] << " " << sv[27] << " " << sv[28] << " " << sv[29] << " " << sv[30]
				<< " " << sv[31] << " " << sv[32] << " " << sv[33] << " " << sv[34] << " " << sv[35]
				<< " " << sv[36] << " " << sv[37] << " " << sv[38] << " " << sv[39] << " " << sv[40]
				<< " " << sv[41] << " " << sv[42] << " " << sv[43] << " " << sv[44] << " " << sv[45]
				<< " " << sv[46] << " " << sv[47] << " " << sv[48] << " " << sv[49] << " " << sv[50]
				<< " " << sv[51] << " " << sv[52] << " " << sv[53] << " " << sv[54] << " " << sv[55]
				<< " " << sv[56] << " " << sv[57] << " " << sv[58] << " " << sv[59] << " " << sv[60]
				<< " " << sv[61]
				<<  "\n";//65
				fout.close();
        	}
    	}
    	fin.close();
    	ofstream fout;
    	fout.open("data0.txt", ios::app);
    	fout << acc << " " << password << " " << uid  << " " << money 
		<< " " << Lv << " " << ATK << " " << MAG << " " << DEF << " " << AGI << " " << HP << " " << MP //11 
		<< " " << ob[0] << " " << ob[1] << " " << ob[2] << " " << ob[3] << " " << ob[4]                //16
		<< " " << bg[0] << " " << bg[1] << " " << bg[2] << " " << bg[3] << " " << bg[4] << " " << bg[5] << " " << bg[6] //23
		<< " " << bg[7] << " " << bg[8] << " " << bg[9] << " " << bg[10] << " " << bg[11] << " " << bg[12]<< " " << bg[13]//30
		<< " " << bg[14] << " " << bg[15] << " " << bg[16] //33
		<< " " <<  WLv[0] << " " <<  WLv[1] << " " <<  WLv[2] << " " <<  WLv[3] << " " <<  WLv[4] << " " <<  WLv[5] //39
		<< " " <<  WLv[6] << " " <<  WLv[7] << " " <<  WLv[8] << " " <<  WLv[9] << " " <<  WLv[10] << " " <<  WLv[11] //45
		<< " " << skt[0] << " " << skt[1] << " " << skt[2] << " " << skt[3] << " " << skt[4] << " " << skt[5] //51
		<< " " << ab[0] << " " << ab[1] << " " << ab[2] << " " << ab[3] << " " << ab[4] << " " << ab[5]       //57
		<< " " << sktb[0] << " " << sktb[1] << " " << sktb[2] << " " << sktb[3] << " " << sktb[4] << " " << sktb[5]//63
		<< " " << exp << " " << sp << "\n";
    	fout.close();
    	remove("data.txt");
   		rename("data0.txt", "data.txt");
		
		//MAP
		ifstream fin0;
		fin0.open("map.txt");
    	while (fin0 >> mid >> uuid >> l ) {
        	if (mid==acc && uuid==uid) {
            	continue;
       		}
      		else {
       	     	ofstream fout0;
            	fout0.open("map0.txt", ios::app);
            	fout0 << mid << " " << uuid << " " << l << "\n";
            	fout0.close();
        	}
    	}
    	fin0.close();
    	ofstream fout0;
    	fout0.open("map0.txt", ios::app);
    	fout0 << acc << " " << uid << " " << locate << "\n";
    	fout0.close();
    	remove("map.txt");
    	rename("map0.txt", "map.txt");
		cout << ".\n..\n...\n�x�s���\\n";
		return 1;
		
    }
    else{
		cout << "ERROR\n";
		goto ban;
	}
}
int create(){   //¾�~��� 
	string id,pw;
    string uuid;
	int mm;
	int lv;
	int atk,mag,def,agi,hhp,mmp;
	int ee,ss;
    system("cls");
    // Open file
	ifstream cFile;
	cFile.open("data.txt", ios::app);
	// Print file content
	while (cFile >> id >> pw >> uid >> mm >> lv >> atk >> mag >> def >> agi >> hhp >> mmp 
	>> ob[0] >> ob[1] >> ob[2] >> ob[3]>> ob[4] 
	>> bg[0] >> bg[1] >> bg[2] >> bg[3] >> bg[4] >> bg[5] >> bg[6] >> bg[7] >> bg[8] >> bg[9] >> bg[10] >> bg[11]  >> bg[12]
	>> bg[13] >> bg[14] >> bg[15] >> bg[16] 
	>> WLv[0] >> WLv[1] >> WLv[2] >> WLv[3] >> WLv[4] >> WLv[5] >> WLv[6] >> WLv[7] >> WLv[8] >> WLv[9] >> WLv[10] >> WLv[11] 
	>> skt[0] >> skt[1] >> skt[2] >> skt[3] >> skt[4] >> skt[5]
	>> ab[0] >> ab[1] >> ab[2] >> ab[3]>> ab[4] >> ab[5] 
	>> sktb[0] >> sktb[1] >> sktb[2] >> sktb[3] >> sktb[4] >> sktb[5]  
	>> ee >> ss ){
		if(id==acc && pw==password){
			money=mm;
			Lv=lv;
			ATK=atk;
			MAG=mag;
			DEF=def;
			AGI=agi;
			HP=hhp;
			MP=mmp;
			exp=ee;
			sp=ss;
			hp=HP;
			mp=MP;
		}
	}
	cFile.close();
	// Open file
	ifstream outFile;
	outFile.open("data.txt", ios::app);
	while (outFile >> id >> pw >> uuid >> mm >> lv >> atk >> mag >> def >> agi >> hhp >> mmp 
	>> ob[0] >> ob[1] >> ob[2] >> ob[3]>> ob[4] 
	>> bg[0] >> bg[1] >> bg[2] >> bg[3] >> bg[4] >> bg[5] >> bg[6] >> bg[7] >> bg[8] >> bg[9] >> bg[10] >> bg[11]  >> bg[12]
	>> bg[13] >> bg[14] >> bg[15] >> bg[16] 
	>> WLv[0] >> WLv[1] >> WLv[2] >> WLv[3] >> WLv[4] >> WLv[5] >> WLv[6] >> WLv[7] >> WLv[8] >> WLv[9] >> WLv[10] >> WLv[11] 
	>> skt[0] >> skt[1] >> skt[2] >> skt[3] >> skt[4] >> skt[5]
	>> ab[0] >> ab[1] >> ab[2] >> ab[3]>> ab[4] >> ab[5] 
	>> sktb[0] >> sktb[1] >> sktb[2] >> sktb[3] >> sktb[4] >> sktb[5]  
	>> ee >> ss){
		uuuu:
		if(id==acc && pw==password && uuid == "0" ){
		cout << "|                                         �п��¾�~  ATK  MAG  DEF  AGI   HP   MP                          |\n";
		cout << "|                                           1.�C�h    40    0   50   25   200   50                          |\n";
		cout << "|                                           2.�k�v     0   40   25   30   100  200                          |\n";
		cout << "|                                           3.����    20   20   35   50   180  100                          |\n";
		cin >> cho;
			if(cho =="1"){
				uid="1";
				cout << "���ߧA�����F�C�h\n";
			}
			else if(cho =="2"){
				uid="2";
				cout << "���ߧA�����F�k�v\n";
			}
			else if(cho =="3"){
				uid="3";
				cout << "���ߧA�����F����\n";
			}
			else if(cho!="1" && cho!="2" && cho!="3"){
				cout << "ERROR\n";
				goto uuuu;
			}
			if(uid=="1"){
				ATK=p1[0];
				MAG=p1[1];
				DEF=p1[2];
				AGI=p1[3];
				HP=p1[4];
				MP=p1[5];
			}
			if(uid=="2"){
				ATK=p2[0];
				MAG=p2[1];
				DEF=p2[2];
				AGI=p2[3];
				HP=p2[4];
				MP=p2[5];
			}
			if(uid=="3"){
				ATK=p3[0];
				MAG=p3[1];
				DEF=p3[2];
				AGI=p3[3];
				HP=p3[4];
				MP=p3[5];
			}
			hp=HP;
			mp=MP;
			cout << "���ڭ̶}�l�_�I�a\n";
			cout << "�Y�N�ǰe�ܰ_�l����" << endl << "." << endl <<".." << endl << "..." << endl ;
			locate=0;
			_sleep(2000);
			
			fstream mapFile;
			mapFile.open("map.txt", ios::app);
			// Write to the file
			mapFile << acc << " " << uid << " " << locate << "\n";
			// Close file
			mapFile.close();
			// Close file
			outFile.close();
			return 1;
		}
		else if(id==acc && pw==password && uuid != "0"){
			outFile.close();
			return 1;
		}
	}
}
int account(){  //�b�� 
	goo:
	system("cls");
	int i;
	printf("�w��Ө�C�޻P�]�k���@��\n");
	printf("Sword and Magic Online\n");
	printf("--------�п��--------\n");
	printf("1�G���U\n");
	printf("2�G�n�J\n");
	printf("3�G���}\n");
	string id,pw;
	go:
	cin >> cho;
	if (cho == "1"){
		ag:
		printf("username�G");
		cin >> acc;
		printf("password�G");
		cin >> password;
		uid="0";
		// Open file
		ifstream myFile;
		myFile.open("data.txt", ios::app);
		while (myFile >> id >> pw >> uid
		>> money >> Lv >> ATK >> MAG >> DEF >> AGI >> HP >> MP 
		>> ob[0] >> ob[1] >> ob[2] >> ob[3]>> ob[4] 
		>> bg[0] >> bg[1] >> bg[2] >> bg[3] >> bg[4] >> bg[5] >> bg[6] >> bg[7] >> bg[8] >> bg[9] >> bg[10] >> bg[11]  >> bg[12]
		>> bg[13] >> bg[14] >> bg[15] >> bg[16] 
		>> WLv[0] >> WLv[1] >> WLv[2] >> WLv[3] >> WLv[4] >> WLv[5] >> WLv[6] >> WLv[7] >> WLv[8] >> WLv[9] >> WLv[10] >> WLv[11] 
		>> skt[0] >> skt[1] >> skt[2] >> skt[3] >> skt[4] >> skt[5]
		>> ab[0] >> ab[1] >> ab[2] >> ab[3]>> ab[4] >> ab[5] 
		>> sktb[0] >> sktb[1] >> sktb[2] >> sktb[3] >> sktb[4] >> sktb[5]  
		>> exp >> sp){
			if(id==acc){
				cout << "�b���w�s�b\n";
				i=1;
			}
	    }
	    // Close file
		myFile.close();
		if(i==1){
			i=0;
			goto ag;
		}
		uid="0";
		money=10000;
		Lv=0;
		ATK=0;
		MAG=0;
		DEF=0;
		AGI=0;
		HP=0;
		MP=0;
		for(int j=0;j<5;j++){
			ob[j]=0;
		}
		for(int j=0;j<17;j++){
			if(j==15){
				bg[j]=9;
			}
			else{
				bg[j]=0;
			}
		}
		for(int j=0;j<12;j++){
			WLv[j]=0;
		}
		for(int j=0;j<6;j++){
			ab[j]=0;
		}
		for(int j=0;j<6;j++){
			skt[j]=0;
		}
		for(int j=0;j<6;j++){
			sktb[j]=0;
		}
		exp=0;
		sp=0;
		// Open file
		fstream inFile;
		inFile.open("data.txt", ios::app);
		// Write to the file
		inFile << acc << " " << password << " " << uid << " " << money  
		<< " " << Lv << " " << ATK << " " << MAG << " " << DEF << " " << AGI << " " << HP << " " << MP //11 
		<< " " << ob[0] << " " << ob[1] << " " << ob[2] << " " << ob[3] << " " << ob[4]                //16
		<< " " << bg[0] << " " << bg[1] << " " << bg[2] << " " << bg[3] << " " << bg[4] << " " << bg[5] << " " << bg[6] //23
		<< " " << bg[7] << " " << bg[8] << " " << bg[9] << " " << bg[10] << " " << bg[11] << " " << bg[12]<< " " << bg[13]//30
		<< " " << bg[14] << " " << bg[15] << " " << bg[16] //33
		<< " " << WLv[0] << " " << WLv[1] << " " << WLv[2] << " " << WLv[3] << " " << WLv[4] << " " << WLv[5] //39
		<< " " << WLv[6] << " " << WLv[7] << " " << WLv[8] << " " << WLv[9] << " " << WLv[10] << " " << WLv[11] //45
		<< " " << skt[0] << " " << skt[1] << " " << skt[2] << " " << skt[3] << " " << skt[4] << " " << skt[5] //51
		<< " " << ab[0] << " " << ab[1] << " " << ab[2] << " " << ab[3] << " " << ab[4] << " " << ab[5] //57 
		<< " " << sktb[0] << " " << sktb[1] << " " << sktb[2] << " " << sktb[3] << " " << sktb[4] << " " << sktb[5]//63
		<< " " << exp << " " << sp //65
		<< "\n";
		// Close file
		inFile.close();
		cout << "�b�����U����\n";
		goto go;
	}
	else if (cho == "2") {
		// Settings
		string id;
		string pw;
		int a = 0;
	    start:
		if(a>=3){
			string pw0,pw1;
			int sv[100];
			string rid,rpw;
			string ruid;
			a=0;
			agg:
			printf("�Э��]�K�X\n");
			printf("newpassword�G");
			cin >> pw0;
			printf("�ЦA����J���]�K�X\n");
			printf("newpassword�G");
			cin >> pw1;
			if(pw0==pw1){
				password=pw0;
				//USER
				ifstream fin;
				fin.open("data.txt");
    			while (fin >> rid >> rpw >> ruid >> sv[0]
				>> sv[1] >> sv[2] >> sv[3] >> sv[4] >> sv[5]
				>> sv[6] >> sv[7] >> sv[8] >> sv[9] >> sv[10]
				>> sv[11] >> sv[12] >> sv[13] >> sv[14] >> sv[15]
				>> sv[16] >> sv[17] >> sv[18] >> sv[19] >> sv[20]
				>> sv[21] >> sv[22] >> sv[23] >> sv[24] >> sv[25]
				>> sv[26] >> sv[27] >> sv[28] >> sv[29] >> sv[30]
				>> sv[31] >> sv[32] >> sv[33] >> sv[34] >> sv[35] 
				>> sv[36] >> sv[37] >> sv[38] >> sv[39] >> sv[40]
				>> sv[41] >> sv[42] >> sv[43] >> sv[44] >> sv[45]
				>> sv[46] >> sv[47] >> sv[48] >> sv[49] >> sv[50]
				>> sv[51] >> sv[52] >> sv[53] >> sv[54] >> sv[55]
				>> sv[56] >> sv[57] >> sv[58] >> sv[59] >> sv[60]
				>> sv[61] ){
		        	if (rid==acc && rpw==password) {
		        		
		        		continue;
		       		}	
		        	else {
		           		ofstream fout;
		           		fout.open("data0.txt", ios::app);
		           		fout << rid << " " << rpw << " " << ruid 
						<< " " << sv[0]
						<< " " << sv[1] << " " << sv[2] << " " << sv[3] << " " << sv[4] << " " << sv[5]
						<< " " << sv[6] << " " << sv[7] << " " << sv[8] << " " << sv[9] << " " << sv[10]
						<< " " << sv[11] << " " << sv[12] << " " << sv[13] << " " << sv[14] << " " << sv[15]
						<< " " << sv[16] << " " << sv[17] << " " << sv[18] << " " << sv[19] << " " << sv[20]
						<< " " << sv[21] << " " << sv[22] << " " << sv[23] << " " << sv[24] << " " << sv[25]
						<< " " << sv[26] << " " << sv[27] << " " << sv[28] << " " << sv[29] << " " << sv[30]
						<< " " << sv[31] << " " << sv[32] << " " << sv[33] << " " << sv[34] << " " << sv[35]
						<< " " << sv[36] << " " << sv[37] << " " << sv[38] << " " << sv[39] << " " << sv[40]
						<< " " << sv[41] << " " << sv[42] << " " << sv[43] << " " << sv[44] << " " << sv[45]
						<< " " << sv[46] << " " << sv[47] << " " << sv[48] << " " << sv[49] << " " << sv[50]
						<< " " << sv[51] << " " << sv[52] << " " << sv[53] << " " << sv[54] << " " << sv[55]
						<< " " << sv[56] << " " << sv[57] << " " << sv[58] << " " << sv[59] << " " << sv[60]
						<< " " << sv[61]
						<<  "\n";//65
						fout.close();
		        	}
		    	}
		    	fin.close();
		    	ofstream fout;
		    	fout.open("data0.txt", ios::app);
		    	fout << acc << " " << password << " " << uid  << " " << money 
				<< " " << Lv << " " << ATK << " " << MAG << " " << DEF << " " << AGI << " " << HP << " " << MP //11 
				<< " " << ob[0] << " " << ob[1] << " " << ob[2] << " " << ob[3] << " " << ob[4]                //16
				<< " " << bg[0] << " " << bg[1] << " " << bg[2] << " " << bg[3] << " " << bg[4] << " " << bg[5] << " " << bg[6] //23
				<< " " << bg[7] << " " << bg[8] << " " << bg[9] << " " << bg[10] << " " << bg[11] << " " << bg[12]<< " " << bg[13]//30
				<< " " << bg[14] << " " << bg[15] << " " << bg[16] //33
				<< " " <<  WLv[0] << " " <<  WLv[1] << " " <<  WLv[2] << " " <<  WLv[3] << " " <<  WLv[4] << " " <<  WLv[5] //39
				<< " " <<  WLv[6] << " " <<  WLv[7] << " " <<  WLv[8] << " " <<  WLv[9] << " " <<  WLv[10] << " " <<  WLv[11] //45
				<< " " << skt[0] << " " << skt[1] << " " << skt[2] << " " << skt[3] << " " << skt[4] << " " << skt[5] //51
				<< " " << ab[0] << " " << ab[1] << " " << ab[2] << " " << ab[3] << " " << ab[4] << " " << ab[5]       //57
				<< " " << sktb[0] << " " << sktb[1] << " " << sktb[2] << " " << sktb[3] << " " << sktb[4] << " " << sktb[5]//63
				<< " " << exp << " " << sp << "\n";
		    	fout.close();
		    	remove("data.txt");
		   		rename("data0.txt", "data.txt");
		   		cout << "���]����\n" ;
		   		_sleep(2000);
		   		goto goo;
			}
			else if(pw0!=pw1){
				printf("�⦸�K�X���P\n");
				printf("�ЦA�����]\n");
				_sleep(1500);
				 goto agg;
			}
			goto goo;
		}
		
		printf("username�G");
		cin >> acc;
		printf("password�G");
		cin >> password;
		//int b[100];

		// Open file
		ifstream myFile;
		myFile.open("data.txt", ios::app);
		int p,m;
		// Print file content
		while (myFile >> id >> pw >> uid
		>> money >> Lv >> ATK >> MAG >> DEF >> AGI >> HP >> MP 
		>> ob[0] >> ob[1] >> ob[2] >> ob[3]>> ob[4] 
		>> bg[0] >> bg[1] >> bg[2] >> bg[3] >> bg[4] >> bg[5] >> bg[6] >> bg[7] >> bg[8] >> bg[9] >> bg[10] >> bg[11]  >> bg[12]
		>> bg[13] >> bg[14] >> bg[15] >> bg[16] 
		>> WLv[0] >> WLv[1] >> WLv[2] >> WLv[3] >> WLv[4] >> WLv[5] >> WLv[6] >> WLv[7] >> WLv[8] >> WLv[9] >> WLv[10] >> WLv[11] 
		>> skt[0] >> skt[1] >> skt[2] >> skt[3] >> skt[4] >> skt[5]
		>> ab[0] >> ab[1] >> ab[2] >> ab[3]>> ab[4] >> ab[5] 
		>> sktb[0] >> sktb[1] >> sktb[2] >> sktb[3] >> sktb[4] >> sktb[5]  
		>> exp >> sp ){
			if (id == acc && pw == password){
				printf(" �n�J���\ \n");
				_sleep(2000); 
				a=0;
				myFile.close();
				int n=create();
				if(n==1){
					int nn=home();
					if(nn=1){
						return 0;
					}
				}
			}
			else if(id == acc && pw != password){
				p=1;
			}
			else if(id != acc){
				m=2;	
			}
		}
		myFile.close();
		if(p==1){
			cout << "�K�X���~\n";
			a=a+1;
			p=0; 
			_sleep(2000);
			goto start;
		}
		if(m==2){
			cout << "�b�����s�b\n";
			a=0;
			m=0;
			_sleep(2000);
			goto start;
		}
		
	}
	else if (cho == "3") {
		return 0;
	}
	else{
		cout << "ERROR\n";
		goto goo;
	}
	return 0;
}

int main() {
	account();
}

