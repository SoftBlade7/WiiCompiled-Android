#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80795F68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_addr_6 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80795F68;

loc_80795F68:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = 0;
    r8 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r7 = MemoryInline::FlatRead32((r3 + 16));
    ctr = r7;
}

loc_80795F94:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_80795FB8;
    }
}

loc_80795F98:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r5_addr_2 = (r5 + r8);
    r0 = MemoryInline::FlatRead32(r5_addr_2);
}

loc_80795FA4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_80795FAC;
    }
}

loc_80795FA8:
{
    goto loc_80795FBC;
}

loc_80795FAC:
{
    r8 = (r8 + 4);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80795F98;
    }
}

loc_80795FB8:
{
    r6 = r7;
}

loc_80795FBC:
{
    r5 = MemoryInline::FlatRead32((r3 + 24));
}

loc_80795FC4:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r5))) {
        goto loc_80796160;
    }
}

loc_80795FC8:
{
    r5 = (r5 + -1);
    MemoryInline::FlatWrite32((r3 + 24), r5);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r6), static_cast<int32_t>(r5));
}

loc_80795FD4:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_80796160;
    }
}

loc_80795FD8:
{
    r30 = (r5 - r6);
    r8 = (r5 + -8);
}

loc_80795FE4:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(8))) {
        goto loc_80796130;
    }
}

loc_80795FE8:
{
    r9 = 0;
    r10 = 0;
    r11 = 0;
    r12 = 0;
    if (((cr & 0x04000000u) != 0)) {
        goto loc_80796010;
    }
}

loc_80795FFC:
{
    r7 = 0x80000000u;
    r0 = (r7 + -2);
}

loc_80796008:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_80796010;
    }
}

loc_8079600C:
{
    r12 = 1;
}

loc_80796010:
{
}

loc_80796014:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8079602C;
    }
}

loc_80796018:
{
    r7 = 0x80000000u;
    r0 = (r7 + -2);
}

loc_80796024:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r0))) {
        goto loc_8079602C;
    }
}

loc_80796028:
{
    r11 = 1;
}

loc_8079602C:
{
}

loc_80796030:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_80796044;
    }
}

loc_80796034:
{
    r0 = (r6 + -2147483648);
}

loc_8079603C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80796044;
    }
}

loc_80796040:
{
    r10 = 1;
}

loc_80796044:
{
}

loc_80796048:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_80796080;
    }
}

loc_8079604C:
{
    r0 = (0 - r6);
    r10 = (r5 & -2147483648);
    r0 = (r0 & -2147483648);
    r7 = 1;
}

loc_80796060:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(r0))) {
        goto loc_80796074;
    }
}

loc_80796064:
{
    r0 = (r30 & -2147483648);
}

loc_8079606C:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(r0))) {
        goto loc_80796074;
    }
}

loc_80796070:
{
    r7 = 0;
}

loc_80796074:
{
}

loc_80796078:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80796080;
    }
}

loc_8079607C:
{
    r9 = 1;
}

loc_80796080:
{
}

loc_80796084:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80796130;
    }
}

loc_80796088:
{
    r0 = (r8 + 7);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r7 = (r7_rot_1 & -4);
    r0 = (r0 - r6);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_807960A0:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r8))) {
        goto loc_80796130;
    }
}

loc_807960A4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 4u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r6 = (r6 + 8);
    r8 = (r0 + r7);
    r0 = MemoryInline::FlatRead32((r8 + 4));
    MemoryInline::FlatWrite32(r8, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r8 = (r0 + r7);
    r0 = MemoryInline::FlatRead32((r8 + 8));
    MemoryInline::FlatWrite32((r8 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r8 = (r0 + r7);
    r0 = MemoryInline::FlatRead32((r8 + 12));
    MemoryInline::FlatWrite32((r8 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r8 = (r0 + r7);
    r0 = MemoryInline::FlatRead32((r8 + 16));
    MemoryInline::FlatWrite32((r8 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r8 = (r0 + r7);
    r0 = MemoryInline::FlatRead32((r8 + 20));
    MemoryInline::FlatWrite32((r8 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r8 = (r0 + r7);
    r0 = MemoryInline::FlatRead32((r8 + 24));
    MemoryInline::FlatWrite32((r8 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r8 = (r0 + r7);
    r0 = MemoryInline::FlatRead32((r8 + 28));
    MemoryInline::FlatWrite32((r8 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    r8 = (r0 + r7);
    r7 = (r7 + 32);
    r0 = MemoryInline::FlatRead32((r8 + 32));
    MemoryInline::FlatWrite32((r8 + 28), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807960A4;
    }
}

loc_80796130:
{
    r0 = (r5 - r6);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r7 = (r7_rot_3 & -4);
    ctr = r0;
}

loc_80796140:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r5))) {
        goto loc_80796160;
    }
}

loc_80796144:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r6 = (r6 + 1);
    r5 = (r0 + r7);
    r7 = (r7 + 4);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite32(r5, r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80796144;
    }
}

loc_80796160:
{
    r5 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80796168:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r5))) {
        goto loc_8079618C;
    }
}

loc_8079616C:
{
    r0 = (r5 + -1);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r7_addr_1 = (r7 + r5);
    r5 = MemoryInline::FlatRead32(r7_addr_1);
    r7_addr_2 = (r7 + r0);
    MemoryInline::FlatWrite32(r7_addr_2, r5);
    r6 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8079618C:
{
    r5 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r5));
}

loc_80796194:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807961B8;
    }
}

loc_80796198:
{
    r0 = (r5 + -1);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_3 & -4);
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r7_addr_4 = (r7 + r5);
    r5 = MemoryInline::FlatRead32(r7_addr_4);
    r7_addr_5 = (r7 + r0);
    MemoryInline::FlatWrite32(r7_addr_5, r5);
    r6 = MemoryInline::FlatRead32((r3 + 16));
}

loc_807961B8:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = r31;
    r5_addr_5 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_5, r4);
    ctx->lr = 0x807961CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8079E884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 120));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r31 + 120), r0);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80795F68 func_80795F68 preserves=true fpr_mask=0x00000000
