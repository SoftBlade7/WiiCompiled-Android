#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80786134(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_807862C0_loc_0 = 0;
    uint32_t addr_lfsx_807863E4_loc_0 = 0;
    uint32_t addr_lfsx_80786448_loc_0 = 0;
    uint32_t addr_lfsx_807864BC_loc_0 = 0;
    uint32_t addr_stfsx_80786344_loc_0 = 0;
    uint32_t addr_stfsx_80786538_loc_0 = 0;
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
    uint32_t r3_rot_17 = 0;
    uint32_t r3_rot_18 = 0;
    uint32_t r3_rot_19 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_20 = 0;
    uint32_t r3_rot_21 = 0;
    uint32_t r3_rot_22 = 0;
    uint32_t r3_rot_23 = 0;
    uint32_t r3_rot_24 = 0;
    uint32_t r3_rot_25 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
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
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r7_rot_6 = 0;
    uint32_t r7_rot_7 = 0;
    uint32_t r7_rot_8 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80786134;

loc_80786134:
{
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    f30.d = f1.d;
    f31.d = f2.d;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r4;
    r0 = MemoryInline::FlatRead32((r3 + 1056));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(256));
}

loc_80786178:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80786184;
    }
}

loc_8078617C:
{
    r3 = 0;
    goto loc_80786548;
}

loc_80786184:
{
    r31 = MemoryInline::FlatRead32((r3 + 1060));
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(5));
    r0 = (r0_rot_1 & -32);
    r30 = (r3 + r0);
    r3 = r30;
    // inline leaf 0x80786F34 (14 guest instruction(s))
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    r0 = (r5 | 1024);
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    MemoryInline::FlatWrite32((r3 + 16), r6);
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    // end of inlined leaf 0x80786F34
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r6 = MemoryInline::FlatRead32((r29 + 1056));
    r3 = (r29 + r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f31.d));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_807861B4:
{
    MemoryInline::FlatWrite32((r29 + 1060), r0);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80786224;
    }
}

loc_807861C8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 16), 0, 12u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 16));
    r5 = 0;
    r0 = 1;
    r3 = r30;
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r5));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 16));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r5));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r29 + 20));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r31));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r29 + 16));
    MemoryInline::FlatWriteFloat32(r4, f2.d);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r29 + 20));
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r5));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r29 + 20));
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r31));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r29 + 20));
    MemoryInline::FlatWriteFloat32(r4, f1.d);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r29 + 24));
    MemoryInline::FlatWrite16((r4 + 20), static_cast<uint16_t>(r5));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r29 + 24));
    MemoryInline::FlatWrite16((r4 + 22), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite32((r29 + 1056), r0);
    goto loc_80786548;
}

loc_80786224:
{
    r7 = r6;
    r4 = 0;
    r0 = 0;
}

loc_80786230:
{
    r8 = (r4 + r7);
    r9 = (r0 + r7);
}

loc_8078623C:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(r6))) {
        goto loc_8078625C;
    }
}

loc_80786240:
{
    r5 = MemoryInline::FlatRead32((r29 + 16));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r3 = (r3_rot_2 & -8);
    r3 = (r5 + r3);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -8));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80786254:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8078625C;
    }
}

loc_80786258:
{
    r4 = r8;
}

loc_8078625C:
{
}

loc_80786260:
{
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(r6))) {
        goto loc_80786280;
    }
}

loc_80786264:
{
    r5 = MemoryInline::FlatRead32((r29 + 20));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(3));
    r3 = (r3_rot_4 & -8);
    r3 = (r5 + r3);
    f0.d = MemoryInline::FlatReadFloat32((r3 + -8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80786278:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80786280;
    }
}

loc_8078627C:
{
    r0 = r9;
}

loc_80786280:
{
}

loc_80786284:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(1))) {
        goto loc_80786294;
    }
}

loc_80786288:
{
    r3 = (r7 + 1);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r3);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r7 = (static_cast<int32_t>(r3) >> 1);
    goto loc_80786230;
}

loc_80786294:
{
    MemoryInline::FlatWrite16((r30 + 20), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r30 + 22), static_cast<uint16_t>(r0));
    r8 = MemoryInline::FlatRead32((r29 + 1056));
    r3 = (r8 - r4);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(3));
    r6 = (r6_rot_1 & -8);
    ctr = r3;
}

loc_807862B0:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(r4))) {
        goto loc_80786330;
    }
}

loc_807862B4:
{
    r3 = (r8 + -1);
    r7 = MemoryInline::FlatRead32((r29 + 16));
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_7 & -8);
    addr_lfsx_807862C0_loc_0 = (r7 + r3);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_807862C0_loc_0);
    r5 = (r7 + r3);
    r7 = (r7 + r6);
    MemoryInline::FlatWriteFloat32(r7, f0.d);
    r3 = MemoryInline::FlatRead8((r5 + 4));
    MemoryInline::FlatWrite8((r7 + 4), static_cast<uint8_t>(r3));
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_8 & -8);
    r5 = MemoryInline::FlatRead8((r5 + 5));
    MemoryInline::FlatWrite8((r7 + 5), static_cast<uint8_t>(r5));
    r5 = MemoryInline::FlatRead32((r29 + 20));
    r5 = (r5 + r3);
    r3 = MemoryInline::FlatRead8((r5 + 4));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r5 + 5));
    r5 = MemoryInline::FlatRead32((r29 + 24));
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r3 = (r3_rot_9 & -32);
    r5 = (r5 + r3);
    r3 = MemoryInline::FlatRead16((r5 + 20));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite16((r5 + 20), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead8((r7 + 5));
}

loc_80786318:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_80786324;
    }
}

loc_8078631C:
{
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8((r7 + 5), static_cast<uint8_t>(r3));
}

loc_80786324:
{
    r6 = (r6 + -8);
    r8 = (r8 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807862B4;
    }
}

loc_80786330:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r6 = (r6_rot_2 & -8);
    r3 = (r3 + r6);
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r29 + 16));
    addr_stfsx_80786344_loc_0 = (r3 + r6);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80786344_loc_0, f2.d);
    r3 = MemoryInline::FlatRead32((r29 + 1056));
}

loc_80786350:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r3))) {
        goto loc_80786370;
    }
}

loc_80786354:
{
    r5 = MemoryInline::FlatRead32((r29 + 16));
    r3 = (r4 + 1);
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_11 & -8);
    r5 = (r5 + 5);
    r5_addr_1 = (r5 + r3);
    r3 = MemoryInline::FlatRead8(r5_addr_1);
}

loc_8078636C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_807863B4;
    }
}

loc_80786370:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r7 = (r4 + -1);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(3));
    r5 = (r5_rot_1 & -8);
    r3 = (r3 + r6);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    goto loc_80786394;
}

loc_80786388:
{
    MemoryInline::FlatWrite8((r6 + 5), static_cast<uint8_t>(r0));
    r5 = (r5 + -8);
    r7 = (r7 + -1);
}

loc_80786394:
{
}

loc_80786398:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(0))) {
        goto loc_807863B8;
    }
}

loc_8078639C:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r6 = (r3 + r5);
    r3 = MemoryInline::FlatRead8((r6 + 5));
}

loc_807863AC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_80786388;
    }
}

loc_807863B0:
{
    goto loc_807863B8;
}

loc_807863B4:
{
    r5_addr_2 = (r5 + r6);
    MemoryInline::FlatWrite8(r5_addr_2, static_cast<uint8_t>(r3));
}

loc_807863B8:
{
    r10 = MemoryInline::FlatRead32((r29 + 1056));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(r0));
}

loc_807863C0:
{
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r8 = (r8_rot_1 & -8);
    r5 = (r10 - r0);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80786514;
    }
}

loc_807863CC:
{
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r3 = (r3_rot_14 & 2147483647);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807863D0:
{
    ctr = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807864A8;
    }
}

loc_807863D8:
{
    r3 = (r10 + -1);
    r9 = MemoryInline::FlatRead32((r29 + 20));
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r7 = (r7_rot_2 & -8);
    addr_lfsx_807863E4_loc_0 = (r9 + r7);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_807863E4_loc_0);
    r6 = (r9 + r7);
    r9 = (r9 + r8);
    MemoryInline::FlatWriteFloat32(r9, f0.d);
    r3 = (r10 + -2);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r7 = (r7_rot_3 & -8);
    r8 = (r8 + -8);
    r3 = MemoryInline::FlatRead8((r6 + 4));
    r10 = (r10 + -2);
    MemoryInline::FlatWrite8((r9 + 4), static_cast<uint8_t>(r3));
    r3_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_16 & -8);
    r6 = MemoryInline::FlatRead8((r6 + 5));
    MemoryInline::FlatWrite8((r9 + 5), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead32((r29 + 16));
    r6 = (r6 + r3);
    r3 = MemoryInline::FlatRead8((r6 + 4));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r9 + 5));
    r6 = MemoryInline::FlatRead32((r29 + 24));
    r3_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r3 = (r3_rot_17 & -32);
    r6 = (r6 + r3);
    r3 = MemoryInline::FlatRead16((r6 + 22));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite16((r6 + 22), static_cast<uint16_t>(r3));
    r9 = MemoryInline::FlatRead32((r29 + 20));
    addr_lfsx_80786448_loc_0 = (r9 + r7);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80786448_loc_0);
    r6 = (r9 + r7);
    r9 = (r9 + r8);
    MemoryInline::FlatWriteFloat32(r9, f0.d);
    r8 = (r8 + -8);
    r3 = MemoryInline::FlatRead8((r6 + 4));
    MemoryInline::FlatWrite8((r9 + 4), static_cast<uint8_t>(r3));
    r3_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_18 & -8);
    r6 = MemoryInline::FlatRead8((r6 + 5));
    MemoryInline::FlatWrite8((r9 + 5), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead32((r29 + 16));
    r6 = (r6 + r3);
    r3 = MemoryInline::FlatRead8((r6 + 4));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r9 + 5));
    r6 = MemoryInline::FlatRead32((r29 + 24));
    r3_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r3 = (r3_rot_19 & -32);
    r6 = (r6 + r3);
    r3 = MemoryInline::FlatRead16((r6 + 22));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite16((r6 + 22), static_cast<uint16_t>(r3));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807863D8;
    }
}

loc_807864A0:
{
    r5 = (r5 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_807864A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80786514;
    }
}

loc_807864A8:
{
    ctr = r5;
}

loc_807864AC:
{
    r3 = (r10 + -1);
    r9 = MemoryInline::FlatRead32((r29 + 20));
    r7_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r7 = (r7_rot_6 & -8);
    r10 = (r10 + -1);
    addr_lfsx_807864BC_loc_0 = (r9 + r7);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_807864BC_loc_0);
    r6 = (r9 + r7);
    r9 = (r9 + r8);
    MemoryInline::FlatWriteFloat32(r9, f0.d);
    r8 = (r8 + -8);
    r3 = MemoryInline::FlatRead8((r6 + 4));
    MemoryInline::FlatWrite8((r9 + 4), static_cast<uint8_t>(r3));
    r3_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_22 & -8);
    r6 = MemoryInline::FlatRead8((r6 + 5));
    MemoryInline::FlatWrite8((r9 + 5), static_cast<uint8_t>(r6));
    r6 = MemoryInline::FlatRead32((r29 + 16));
    r6 = (r6 + r3);
    r3 = MemoryInline::FlatRead8((r6 + 4));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r9 + 5));
    r6 = MemoryInline::FlatRead32((r29 + 24));
    r3_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r3 = (r3_rot_23 & -32);
    r6 = (r6 + r3);
    r3 = MemoryInline::FlatRead16((r6 + 22));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite16((r6 + 22), static_cast<uint16_t>(r3));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807864AC;
    }
}

loc_80786514:
{
    r5 = MemoryInline::FlatRead32((r29 + 20));
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r6 = (r6_rot_3 & -8);
    r3 = r30;
    r5 = (r5 + r6);
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead32((r29 + 20));
    r4 = (r0 + r6);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r31));
    r4 = MemoryInline::FlatRead32((r29 + 20));
    addr_stfsx_80786538_loc_0 = (r4 + r6);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80786538_loc_0, f1.d);
    r4 = MemoryInline::FlatRead32((r29 + 1056));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r29 + 1056), r0);
}

loc_80786548:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00007FB gpr_write=0xF00007FB gpr_return=0x00000018 fpr_read=0xC0000007 fpr_write=0xC0000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80786134 func_80786134 preserves=true fpr_mask=0x00000000
