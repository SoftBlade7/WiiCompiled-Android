#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80514DF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
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
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
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
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80514DF0;

loc_80514DF0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8002158C (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002158C
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r24 = r3;
    r25 = -1;
}

loc_80514E14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80514E24;
    }
}

loc_80514E18:
{
    r3 = MemoryInline::FlatRead32(r3);
    r30 = MemoryInline::FlatRead32(r3);
    goto loc_80514E28;
}

loc_80514E24:
{
    r30 = 0;
}

loc_80514E28:
{
    r0 = MemoryInline::FlatRead8((r30 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80514E34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80514F54;
    }
}

loc_80514E38:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r0));
    r26 = 0;
    r23 = 2;
    r31 = 1;
}

loc_80514E4C:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = (r26 & 65535);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 8));
}

loc_80514E60:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_80514F48;
    }
}

loc_80514E64:
{
    r0 = MemoryInline::FlatRead16((r24 + 4));
}

loc_80514E6C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80514E80;
    }
}

loc_80514E70:
{
    r3 = MemoryInline::FlatRead32(r24);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r3_addr_2 = (r3 + r0);
    r27 = MemoryInline::FlatRead32(r3_addr_2);
    goto loc_80514E84;
}

loc_80514E80:
{
    r27 = 0;
}

loc_80514E84:
{
    r0 = MemoryInline::FlatRead8((r27 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80514E90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80514F48;
    }
}

loc_80514E94:
{
    MemoryInline::FlatWrite8((r27 + 4), static_cast<uint8_t>(r31));
    r28 = 0;
}

loc_80514E9C:
{
    r3 = MemoryInline::FlatRead32(r27);
    r0 = (r28 & 65535);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 8));
}

loc_80514EB0:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_80514F3C;
    }
}

loc_80514EB4:
{
    r0 = MemoryInline::FlatRead16((r24 + 4));
}

loc_80514EBC:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80514ED0;
    }
}

loc_80514EC0:
{
    r3 = MemoryInline::FlatRead32(r24);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & 262140);
    r3_addr_5 = (r3 + r0);
    r29 = MemoryInline::FlatRead32(r3_addr_5);
    goto loc_80514ED4;
}

loc_80514ED0:
{
    r29 = 0;
}

loc_80514ED4:
{
    r0 = MemoryInline::FlatRead8((r29 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80514EE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80514F3C;
    }
}

loc_80514EE4:
{
    MemoryInline::FlatWrite8((r29 + 4), static_cast<uint8_t>(r23));
    r22 = 0;
}

loc_80514EEC:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r22 & 65535);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 8));
}

loc_80514F00:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_80514F30;
    }
}

loc_80514F04:
{
    r0 = MemoryInline::FlatRead16((r24 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80514F0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80514F20;
    }
}

loc_80514F10:
{
    r3 = MemoryInline::FlatRead32(r24);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & 262140);
    r3_addr_8 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_8);
    goto loc_80514F24;
}

loc_80514F20:
{
    r3 = 0;
}

loc_80514F24:
{
    r5 = r24;
    r4 = 3;
    ctx->lr = 0x80514F30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x805150E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80514F30:
{
    r22 = (r22 + 1);
}

loc_80514F38:
{
    if ((static_cast<uint32_t>(r22) < static_cast<uint32_t>(6))) {
        goto loc_80514EEC;
    }
}

loc_80514F3C:
{
    r28 = (r28 + 1);
}

loc_80514F44:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(6))) {
        goto loc_80514E9C;
    }
}

loc_80514F48:
{
    r26 = (r26 + 1);
}

loc_80514F50:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(6))) {
        goto loc_80514E4C;
    }
}

loc_80514F54:
{
    r4 = MemoryInline::FlatRead16((r24 + 4));
    r5 = 0;
    goto loc_80514FBC;
}

loc_80514F60:
{
    r0 = (r5 & 65535);
}

loc_80514F68:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_80514F7C;
    }
}

loc_80514F6C:
{
    r3 = MemoryInline::FlatRead32(r24);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & 262140);
    r3_addr_15 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_15);
    goto loc_80514F80;
}

loc_80514F7C:
{
    r3 = 0;
}

loc_80514F80:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80514F8C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r25))) {
        goto loc_80514FB8;
    }
}

loc_80514F90:
{
    r0 = (r5 & 65535);
}

loc_80514F98:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_80514FAC;
    }
}

loc_80514F9C:
{
    r3 = MemoryInline::FlatRead32(r24);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & 262140);
    r3_addr_17 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_17);
    goto loc_80514FB0;
}

loc_80514FAC:
{
    r3 = 0;
}

loc_80514FB0:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r25 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80514FB8:
{
    r5 = (r5 + 1);
}

loc_80514FBC:
{
    r0 = (r5 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_80514FC4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80514F60;
    }
}

loc_80514FC8:
{
    r3 = (r25 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r4 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat64((r4 + -1456));
    r3 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r11 = (r1 + 64);
    f1.d = MemoryInline::FlatReadFloat32((r3 + -1468));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteFloat32((r24 + 12), f0.d);
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFC007FB gpr_write=0xFFC0083B gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80514DF0 func_80514DF0 preserves=true fpr_mask=0x00000000
