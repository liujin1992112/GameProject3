﻿#ifndef __WEB_ACTION_DEFINE_H__
#define __WEB_ACTION_DEFINE_H__

enum EWebAction
{
	EWA_NONE = 0,               //无效动作
	EWA_SEAL_ACCOUNT,           //账号的封禁与解封
	EWA_SEAL_ROLE,              //封禁角色
	EWA_SERVER_CHNAGE,          //服务器配制改变
	EWA_REVIEW_CHANGE,          //评审信息改变
	EWA_RELOAD_TABLE,           //重新加载配制表

	EWA_SERVER_START,           //启动服务器
	EWA_SERVER_STOP,            //停止服务器
	EWA_SERVER_UPDATE,          //更新服务器
	EWA_SERVER_INFO,            //服务器信息
};


enum EWebResult
{
	EWR_SUCCESSED = 0,          //成功
	EWR_FAILURE,                //失败
	EWR_INVALID_ACT,            //无效的操作
};


#endif //__WEB_ACTION_DEFINE_H__