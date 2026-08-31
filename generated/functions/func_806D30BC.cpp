#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806D30BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806D30BC;

loc_806D30BC:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r11 = (r1 + 64);
    // inline leaf 0x80021588 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -4), r31);
    // end of inlined leaf 0x80021588
    r26 = 0x809C0000u;
    r29 = r3;
    r3 = MemoryInline::FlatRead32((r26 + 8880));
    r4 = 0;
    // inline leaf 0x806F10FC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x806F10FC
    r31 = MemoryInline::FlatRead16((r3 + 8));
    r4 = 1;
    r3 = MemoryInline::FlatRead32((r26 + 8880));
    // inline leaf 0x806F10FC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x806F10FC
    r30 = MemoryInline::FlatRead16((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(r30));
}

loc_806D3104:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806D3110;
    }
}

loc_806D3108:
{
    MemoryInline::FlatWrite16((r29 + 268), static_cast<uint16_t>(r31));
    goto loc_806D3114;
}

loc_806D3110:
{
    MemoryInline::FlatWrite16((r29 + 268), static_cast<uint16_t>(r30));
}

loc_806D3114:
{
    r0 = 20;
    MemoryInline::FlatWrite16((r29 + 270), static_cast<uint16_t>(r0));
    r24 = 0;
    r25 = 0;
    r27 = 0x809C0000u;
    r28 = 0x808A0000u;
    goto loc_806D320C;
}

loc_806D3130:
{
    r0 = MemoryInline::FlatRead16((r29 + 268));
    r23 = -1;
    r3 = MemoryInline::FlatRead16((r29 + 270));
    r0 = (r0 - r24);
    f31.d = MemoryInline::FlatReadFloat32((r28 + -12));
    r22 = (r0 - r3);
    goto loc_806D31E4;
}

loc_806D314C:
{
}

loc_806D3150:
{
    r21 = r22;
    if ((static_cast<int32_t>(r22) >= static_cast<int32_t>(0))) {
        goto loc_806D315C;
    }
}

loc_806D3158:
{
    r21 = (r22 + r30);
}

loc_806D315C:
{
}

loc_806D3160:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(r30))) {
        goto loc_806D3168;
    }
}

loc_806D3164:
{
    r21 = (r21 - r30);
}

loc_806D3168:
{
    r3 = MemoryInline::FlatRead32((r27 + 8880));
    r4 = 1;
    // inline leaf 0x806F10FC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    // end of inlined leaf 0x806F10FC
    r4 = (r21 & 65535);
    // inline leaf 0x806ED150 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & 1048560);
    r3 = (r3 + r0);
    // end of inlined leaf 0x806ED150
    r26 = r3;
    r3 = MemoryInline::FlatRead32((r27 + 8880));
    r4 = 0;
    // inline leaf 0x806F10FC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    // end of inlined leaf 0x806F10FC
    r4 = (r24 & 65535);
    // inline leaf 0x806ED150 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_7 & 1048560);
    r3 = (r3 + r0);
    // end of inlined leaf 0x806ED150
    f3.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32(r26);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f1.d = PpcFmulsInline(f4.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = PpcFmulsInline(f3.d, f3.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_806D31D0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806D31E0;
    }
}

loc_806D31D8:
{
    f31.d = f0.d;
    r23 = r21;
}

loc_806D31E0:
{
    r22 = (r22 + 1);
}

loc_806D31E4:
{
    r0 = MemoryInline::FlatRead16((r29 + 268));
    r3 = MemoryInline::FlatRead16((r29 + 270));
    r0 = (r0 - r24);
    r0 = (r3 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(r0));
}

loc_806D31F8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806D314C;
    }
}

loc_806D31FC:
{
    r3 = MemoryInline::FlatRead32((r29 + 260));
    r24 = (r24 + 1);
    r3_addr_6 = (r3 + r25);
    MemoryInline::FlatWrite16(r3_addr_6, static_cast<uint16_t>(r23));
    r25 = (r25 + 2);
}

loc_806D320C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r31));
}

loc_806D3210:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806D3130;
    }
}

loc_806D3214:
{
    r21 = 0;
    r25 = 0;
    r27 = 0x809C0000u;
    r26 = 0x808A0000u;
    goto loc_806D3304;
}

loc_806D3228:
{
    r0 = MemoryInline::FlatRead16((r29 + 268));
    r22 = -1;
    r3 = MemoryInline::FlatRead16((r29 + 270));
    r0 = (r0 - r21);
    f31.d = MemoryInline::FlatReadFloat32((r26 + -12));
    r23 = (r0 - r3);
    goto loc_806D32DC;
}

loc_806D3244:
{
}

loc_806D3248:
{
    r24 = r23;
    if ((static_cast<int32_t>(r23) >= static_cast<int32_t>(0))) {
        goto loc_806D3254;
    }
}

loc_806D3250:
{
    r24 = (r23 + r31);
}

loc_806D3254:
{
}

loc_806D3258:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r31))) {
        goto loc_806D3260;
    }
}

loc_806D325C:
{
    r24 = (r24 - r31);
}

loc_806D3260:
{
    r3 = MemoryInline::FlatRead32((r27 + 8880));
    r4 = 0;
    // inline leaf 0x806F10FC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3_addr_9 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_9);
    // end of inlined leaf 0x806F10FC
    r4 = (r24 & 65535);
    // inline leaf 0x806ED150 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_11 & 1048560);
    r3 = (r3 + r0);
    // end of inlined leaf 0x806ED150
    r28 = r3;
    r3 = MemoryInline::FlatRead32((r27 + 8880));
    r4 = 1;
    // inline leaf 0x806F10FC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r3_addr_10 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_10);
    // end of inlined leaf 0x806F10FC
    r4 = (r21 & 65535);
    // inline leaf 0x806ED150 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_13 & 1048560);
    r3 = (r3 + r0);
    // end of inlined leaf 0x806ED150
    f3.d = MemoryInline::FlatReadFloat32(r3);
    f2.d = MemoryInline::FlatReadFloat32(r28);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f1.d = PpcFmulsInline(f4.d, f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = PpcFmulsInline(f3.d, f3.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_806D32C8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806D32D8;
    }
}

loc_806D32D0:
{
    f31.d = f0.d;
    r22 = r24;
}

loc_806D32D8:
{
    r23 = (r23 + 1);
}

loc_806D32DC:
{
    r0 = MemoryInline::FlatRead16((r29 + 268));
    r3 = MemoryInline::FlatRead16((r29 + 270));
    r0 = (r0 - r21);
    r0 = (r3 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(r0));
}

loc_806D32F0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806D3244;
    }
}

loc_806D32F4:
{
    r3 = MemoryInline::FlatRead32((r29 + 264));
    r21 = (r21 + 1);
    r3_addr_11 = (r3 + r25);
    MemoryInline::FlatWrite16(r3_addr_11, static_cast<uint16_t>(r22));
    r25 = (r25 + 2);
}

loc_806D3304:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(r30));
}

loc_806D3308:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806D3228;
    }
}

loc_806D330C:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 64);
    f31.d = leaf_stack_saved_f31_entry;
    // inline leaf 0x800215D4 (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -4));
    // end of inlined leaf 0x800215D4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFE0001B gpr_write=0xFFE0081B gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806D30BC func_806D30BC preserves=true fpr_mask=0x00000000
