#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F6D34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r27_addr_6 = 0;
    uint32_t r27_addr_7 = 0;
    uint32_t r27_addr_8 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
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
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800F6D34;

loc_800F6D34:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r31 = 0;
    goto loc_800F6D8C;
}

loc_800F6D60:
{
    r27_addr_2 = (r27 + r26);
    r4 = MemoryInline::FlatRead8(r27_addr_2);
    r3 = (r13 + -31576);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_800F6D74:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F6D80;
    }
}

loc_800F6D78:
{
    r0 = 1;
    goto loc_800F6D9C;
}

loc_800F6D80:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r29, r0);
}

loc_800F6D8C:
{
    r26 = MemoryInline::FlatRead32(r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(r28));
}

loc_800F6D94:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F6D60;
    }
}

loc_800F6D98:
{
    r0 = 0;
}

loc_800F6D9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F6DA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F6DAC;
    }
}

loc_800F6DA4:
{
    r3 = 0;
    goto loc_800F6F48;
}

loc_800F6DAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(r28));
}

loc_800F6DB0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800F6DBC;
    }
}

loc_800F6DB4:
{
    r3 = 0;
    goto loc_800F6F48;
}

loc_800F6DBC:
{
    r27_addr_4 = (r27 + r26);
    r6 = MemoryInline::FlatRead8(r27_addr_4);
    r5 = (r27 + r26);
    r0 = 0;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_800F6DD8;
    }
}

loc_800F6DD0:
{
}

loc_800F6DD4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(256))) {
        goto loc_800F6DDC;
    }
}

loc_800F6DD8:
{
    r0 = 1;
}

loc_800F6DDC:
{
}

loc_800F6DE0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F6DEC;
    }
}

loc_800F6DE4:
{
    r0 = 0;
    goto loc_800F6E08;
}

loc_800F6DEC:
{
    r3 = 0x80270000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r3 + 4424);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_1);
    r0 = (r0 & 9);
}

loc_800F6E08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F6E0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F6E5C;
    }
}

loc_800F6E10:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r0 = 0;
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_800F6E24;
    }
}

loc_800F6E1C:
{
}

loc_800F6E20:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(256))) {
        goto loc_800F6E28;
    }
}

loc_800F6E24:
{
    r0 = 1;
}

loc_800F6E28:
{
}

loc_800F6E2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F6E38;
    }
}

loc_800F6E30:
{
    r0 = 0;
    goto loc_800F6E54;
}

loc_800F6E38:
{
    r3 = 0x80270000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = (r3 + 4424);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_3);
    r0 = (r0 & 8);
}

loc_800F6E54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F6E58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F6E64;
    }
}

loc_800F6E5C:
{
    r3 = 0;
    goto loc_800F6F48;
}

loc_800F6E64:
{
    r0 = 1;
    r26 = 0x80270000u;
    MemoryInline::FlatWrite32(r30, r5);
    r26 = (r26 + 4424);
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_800F6F20;
}

loc_800F6E88:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r25)));
}

loc_800F6E90:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(58))) {
        goto loc_800F6EAC;
    }
}

loc_800F6E94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_800F6E98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F6EA4;
    }
}

loc_800F6E9C:
{
    r3 = 0;
    goto loc_800F6F48;
}

loc_800F6EA4:
{
    r31 = 1;
    goto loc_800F6F08;
}

loc_800F6EAC:
{
}

loc_800F6EB0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(95))) {
        goto loc_800F6F08;
    }
}

loc_800F6EB4:
{
}

loc_800F6EB8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(45))) {
        goto loc_800F6F08;
    }
}

loc_800F6EBC:
{
}

loc_800F6EC0:
{
    r0 = 0;
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_800F6ED0;
    }
}

loc_800F6EC8:
{
}

loc_800F6ECC:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(256))) {
        goto loc_800F6ED4;
    }
}

loc_800F6ED0:
{
    r0 = 1;
}

loc_800F6ED4:
{
}

loc_800F6ED8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F6EE4;
    }
}

loc_800F6EDC:
{
    r0 = 0;
    goto loc_800F6EF8;
}

loc_800F6EE4:
{
    r3 = MemoryInline::FlatRead32((r26 + 56));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_6 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_6);
    r0 = (r0 & 9);
}

loc_800F6EF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F6EFC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800F6F08;
    }
}

loc_800F6F00:
{
    r3 = 1;
    goto loc_800F6F48;
}

loc_800F6F08:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 4), r0);
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r29, r0);
}

loc_800F6F20:
{
    r0 = MemoryInline::FlatRead32(r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r28));
}

loc_800F6F28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800F6F44;
    }
}

loc_800F6F2C:
{
    r27_addr_6 = (r27 + r0);
    r25 = MemoryInline::FlatRead8(r27_addr_6);
    r3 = (r13 + -31576);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r25)));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800133F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F6F40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F6E88;
    }
}

loc_800F6F44:
{
    r3 = 1;
}

loc_800F6F48:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE0020FB gpr_write=0xFE00087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F6D34 func_800F6D34 preserves=true fpr_mask=0x00000000
