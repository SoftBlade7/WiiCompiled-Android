#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80574E60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80574E60;

loc_80574E60:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
}

loc_80574E6C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 6064);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(50))) {
        goto loc_80574EA4;
    }
}

loc_80574E90:
{
    r6 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 20));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80574EA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80575090;
    }
}

loc_80574EA4:
{
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80575090;
    }
}

loc_80574EAC:
{
    r0 = (r4 ^ 70);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 68));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r0) >> 1);
}

loc_80574EBC:
{
    r0 = (r0 & r4);
    MemoryInline::FlatWriteFloat32((r3 + 116), f0.d);
    r0 = (r5 - r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(1))) {
        goto loc_80574EE8;
    }
}

loc_80574ED0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80574ED4:
{
    r0 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80574EE0;
    }
}

loc_80574EDC:
{
    r0 = 3;
}

loc_80574EE0:
{
    MemoryInline::FlatWrite32((r3 + 112), r0);
    goto loc_80574F54;
}

loc_80574EE8:
{
}

loc_80574EEC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(2))) {
        goto loc_80574F08;
    }
}

loc_80574EF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80574EF4:
{
    r0 = 1;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80574F00;
    }
}

loc_80574EFC:
{
    r0 = 4;
}

loc_80574F00:
{
    MemoryInline::FlatWrite32((r3 + 112), r0);
    goto loc_80574F54;
}

loc_80574F08:
{
}

loc_80574F0C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(3))) {
        goto loc_80574F30;
    }
}

loc_80574F10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80574F14:
{
    r0 = 2;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80574F20;
    }
}

loc_80574F1C:
{
    r0 = 5;
}

loc_80574F20:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWrite32((r3 + 112), r0);
    MemoryInline::FlatWriteFloat32((r3 + 116), f0.d);
    goto loc_80574F54;
}

loc_80574F30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(4));
}

loc_80574F34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80574F54;
    }
}

loc_80574F38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80574F3C:
{
    r0 = 2;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80574F48;
    }
}

loc_80574F44:
{
    r0 = 5;
}

loc_80574F48:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    MemoryInline::FlatWrite32((r3 + 112), r0);
    MemoryInline::FlatWriteFloat32((r3 + 116), f0.d);
}

loc_80574F54:
{
    r0 = MemoryInline::FlatRead32((r3 + 112));
    r4 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r3 + 140));
    r4 = (r4 + 22280);
    r0 = (r0 * 24);
    f1.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = r29;
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r5 + 20), r4);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 20));
    MemoryInline::FlatWriteFloat32((r5 + 16), f2.d);
    f2.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32((r5 + 4), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 12));
    MemoryInline::FlatWriteFloat32((r5 + 12), f2.d);
    MemoryInline::FlatWriteFloat32(r5, f1.d);
    MemoryInline::FlatWriteFloat32((r5 + 8), f0.d);
    // inline leaf 0x80590A40 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80590A40
    r12 = MemoryInline::FlatRead32((r3 + 32));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r30)));
    r4 = 2;
    r12 = MemoryInline::FlatRead32((r12 + 28));
    ctr = r12;
    ctx->lr = 0x80574FB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r29;
    r4 = 11;
    ctx->lr = 0x80574FC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805907B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_80574FD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80574FE4;
    }
}

loc_80574FD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(35));
}

loc_80574FDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80575008;
    }
}

loc_80574FE0:
{
    goto loc_80575028;
}

loc_80574FE4:
{
    r3 = r29;
    // inline leaf 0x80590794 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80590794
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 698;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r12 = MemoryInline::FlatRead32((r12 + 224));
    ctr = r12;
    ctx->lr = 0x80575004u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80575028;
}

loc_80575008:
{
    r3 = r29;
    // inline leaf 0x80590794 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80590794
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 782;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r12 = MemoryInline::FlatRead32((r12 + 224));
    ctr = r12;
    ctx->lr = 0x80575028u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80575028:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 | 32768);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r3 + 56));
}

loc_8057504C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8057505C;
    }
}

loc_80575050:
{
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 16), r0);
}

loc_8057505C:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057506C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80575098;
    }
}

loc_80575070:
{
    r30 = MemoryInline::FlatRead8((r29 + 122));
    r3 = r29;
    // inline leaf 0x80591440 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 60));
    // end of inlined leaf 0x80591440
    MemoryInline::FlatWrite8((r3 + 86), static_cast<uint8_t>(r30));
    r3 = r29;
    r4 = 10;
    // inline leaf 0x805917F4 (13 guest instruction(s))
}

loc_inl4_0x805917F4:
{
    r5 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl4_0x80591804:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x80591808:
{
    r3 = MemoryInline::FlatRead32((r5 + 60));
    r0 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead32((r4 + 20));
    r0 = (r3 ^ r0);
    MemoryInline::FlatWrite32((r4 + 20), r0);
    goto loc_inl4_cont_805917F4;
}

loc_inl4_return:
{
}

loc_inl4_cont_805917F4:
{
    // end of inlined leaf 0x805917F4
    goto loc_80575098;
}

loc_80575090:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 112), r0);
}

loc_80575098:
{
    f2.d = MemoryInline::FlatReadFloat32(r31);
    r3 = (r29 + 124);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f3.d = f2.d;
    f4.d = f2.d;
    // inline leaf 0x80239DFC (5 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    MemoryInline::FlatWriteFloat32(r3, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f4.d);
    // end of inlined leaf 0x80239DFC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80574E60 func_80574E60 preserves=true fpr_mask=0x00000000
