#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E1998(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805E1998;

loc_805E1998:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r7 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r27 = r4;
    r5 = MemoryInline::FlatRead32((r7 + 7736));
    r4 = MemoryInline::FlatRead32((r5 + 152));
    r31 = MemoryInline::FlatRead32((r4 + 964));
    r30 = MemoryInline::FlatRead32((r4 + 968));
    r0 = (r31 + -2);
    r4 = MemoryInline::FlatRead32((r4 + 972));
}

loc_805E19CC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_805E1A04;
    }
}

loc_805E19D0:
{
}

loc_805E19D4:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(1))) {
        goto loc_805E19F8;
    }
}

loc_805E19D8:
{
    r3 = MemoryInline::FlatRead32((r5 + 144));
    r7 = r30;
    r8 = r27;
    r4 = (r4 & 255);
    r5 = 0;
    r6 = 0;
    // inline leaf 0x80621C78 (14 guest instruction(s))
}

loc_inl0_0x80621C78:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80621C80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80621C84:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl0_0x80621C8C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80621C90:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 252), r4);
    MemoryInline::FlatWrite32((r3 + 256), r5);
    MemoryInline::FlatWrite8((r3 + 260), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r3 + 264), r7);
    MemoryInline::FlatWrite8((r3 + 268), static_cast<uint8_t>(r8));
    goto loc_inl0_cont_80621C78;
}

loc_inl0_return:
{
}

loc_inl0_cont_80621C78:
{
    // end of inlined leaf 0x80621C78
    goto loc_805E1AF0;
}

loc_805E19F8:
{
    r0 = (r31 + -7);
}

loc_805E1A00:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(29))) {
        goto loc_805E1A80;
    }
}

loc_805E1A04:
{
    r29 = MemoryInline::FlatRead32((r3 + 100));
    r28 = 0;
    goto loc_805E1A70;
}

loc_805E1A10:
{
    r3 = r29;
    r4 = (r28 & 65535);
    // inline leaf 0x8051D084 (14 guest instruction(s))
}

loc_inl1_0x8051D084:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
}

loc_inl1_0x8051D08C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x8051D098;
    }
}

loc_inl1_0x8051D090:
{
    r3 = 0;
    goto loc_inl1_cont_8051D084;
}

loc_inl1_0x8051D098:
{
    r4 = (r4 * 216);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_2 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_inl1_0x8051D0A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8051D0B4;
    }
}

loc_inl1_0x8051D0AC:
{
    r3 = (r3 + r4);
    goto loc_inl1_cont_8051D084;
}

loc_inl1_0x8051D0B4:
{
    r3 = 0;
}

loc_inl1_cont_8051D084:
{
    // end of inlined leaf 0x8051D084
}

loc_805E1A20:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805E1A6C;
    }
}

loc_805E1A24:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_805E1A2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805E1A6C;
    }
}

loc_805E1A30:
{
    r0 = MemoryInline::FlatRead32((r3 + 196));
}

loc_805E1A38:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(r0))) {
        goto loc_805E1A6C;
    }
}

loc_805E1A3C:
{
    r0 = MemoryInline::FlatRead32((r3 + 184));
}

loc_805E1A44:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(r0))) {
        goto loc_805E1A6C;
    }
}

loc_805E1A48:
{
    r3 = 0x809C0000u;
    r6 = r30;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r7 = r27;
    r5 = (r28 & 255);
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x80621C3C (15 guest instruction(s))
}

loc_inl2_0x80621C3C:
{
    r0 = MemoryInline::FlatRead8((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl2_0x80621C44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80621C48:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl2_0x80621C50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80621C54:
{
    r8 = 1;
    r0 = -1;
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite32((r3 + 252), r0);
    MemoryInline::FlatWrite32((r3 + 256), r4);
    MemoryInline::FlatWrite8((r3 + 260), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r3 + 264), r6);
    MemoryInline::FlatWrite8((r3 + 268), static_cast<uint8_t>(r7));
    goto loc_inl2_cont_80621C3C;
}

loc_inl2_return:
{
}

loc_inl2_cont_80621C3C:
{
    // end of inlined leaf 0x80621C3C
    goto loc_805E1AF0;
}

loc_805E1A6C:
{
    r28 = (r28 + 1);
}

loc_805E1A70:
{
    r0 = MemoryInline::FlatRead16((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r0));
}

loc_805E1A78:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805E1A10;
    }
}

loc_805E1A7C:
{
    goto loc_805E1AF0;
}

loc_805E1A80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(6));
}

loc_805E1A84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E1AF0;
    }
}

loc_805E1A88:
{
    r0 = (r31 + -37);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_805E1A90:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805E1AC4;
    }
}

loc_805E1A94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(37));
}

loc_805E1A98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E1AB0;
    }
}

loc_805E1A9C:
{
    r5 = MemoryInline::FlatRead32((r3 + 776));
    r4 = r30;
    r3 = 2;
    ctx->lr = 0x805E1AACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805427BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_805E1AF0;
}

loc_805E1AB0:
{
    r5 = MemoryInline::FlatRead32((r3 + 776));
    r4 = r30;
    r3 = 3;
    ctx->lr = 0x805E1AC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805427BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_805E1AF0;
}

loc_805E1AC4:
{
    r6 = 0x809C0000u;
    r5 = 5;
    r4 = MemoryInline::FlatRead32((r6 + -10456));
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 3352), r5);
    r5 = MemoryInline::FlatRead32((r7 + 7736));
    r4 = MemoryInline::FlatRead32((r6 + -10456));
    r5 = MemoryInline::FlatRead32((r5 + 152));
    r5 = MemoryInline::FlatRead32((r5 + 968));
    MemoryInline::FlatWrite32((r4 + 5976), r5);
    MemoryInline::FlatWrite32((r3 + 148), r0);
}

loc_805E1AF0:
{
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805E1998 func_805E1998 preserves=true fpr_mask=0x00000000
