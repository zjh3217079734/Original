import React, { Component } from 'react';
import './manualAddProxy.css';
import { List, InputItem } from 'antd-mobile';
// import { createForm } from 'rc-form';
import NormalNavigation from '../NavBar/NormalNavigation';

class ManualAddProxy extends Component {

    render() {
        return (
            <div>
                <NormalNavigation 
                    title="选择线路"
                />

                <List renderHeader={() => ''}>

                    <InputItem
                        placeholder="选择国家"
                    >
                        国家
                    </InputItem>

                    <InputItem
                        placeholder="代理名称"
                    >
                        名称
                    </InputItem>

                    <InputItem
                        placeholder="代理服务器"
                    >
                        服务器
                    </InputItem>

                    <InputItem
                        placeholder="代理服务器端口"
                    >
                        端口
                    </InputItem>

                    <InputItem
                        placeholder="aes-128-cfb"
                    >
                        加密
                    </InputItem>

                    <InputItem
                        placeholder="代理密码"
                    >
                        密码
                    </InputItem>

                </List>
            </div>
        );
    }
}

export default ManualAddProxy;
