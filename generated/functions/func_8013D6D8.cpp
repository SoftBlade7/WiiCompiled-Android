#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013D6D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_sthux_8013D82C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8013D6D8;

loc_8013D6D8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
}

loc_8013D6F0:
{
    r27 = r3;
    r26 = r4;
    r28 = r5;
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(2))) {
        goto loc_8013D704;
    }
}

loc_8013D700:
{
    r27 = 128;
}

loc_8013D704:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8013D708:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013D714;
    }
}

loc_8013D70C:
{
    r3 = 5;
    goto loc_8013D890;
}

loc_8013D714:
{
    r0 = MemoryInline::FlatRead8((r5 + 8));
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r29 = 0;
    r31 = (r0 & -17);
    r30 = (r3 + 52);
}

loc_8013D72C:
{
    r0 = MemoryInline::FlatRead8((r30 + 281));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013D734:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013D750;
    }
}

loc_8013D738:
{
    r4 = r26;
    r3 = (r30 + 8);
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8013D74C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8013D760;
    }
}

loc_8013D750:
{
    r29 = (r29 + 1);
    r30 = (r30 + 284);
}

loc_8013D75C:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(4))) {
        goto loc_8013D72C;
    }
}

loc_8013D760:
{
    r30 = (r29 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(4));
}

loc_8013D768:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013D774;
    }
}

loc_8013D76C:
{
    r3 = 7;
    goto loc_8013D890;
}

loc_8013D774:
{
    r0 = (r30 * 34);
    r4 = 0x80330000u;
    r3 = (r31 & 255);
}

loc_8013D780:
{
    r4 = (r4 + 25208);
    r4 = (r4 + r0);
    r29 = (r4 + 1228);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8013D7BC;
    }
}

loc_8013D790:
{
    r26 = (r3 + -1);
    // inline leaf 0x8013B190 (4 guest instruction(s))
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r3 = (r3 + 1600);
    // end of inlined leaf 0x8013B190
    r4 = (r2 + -26880);
    r5 = (r2 + -26876);
    r4_addr_1 = (r4 + r26);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
    r5_addr_1 = (r5 + r26);
    r4 = MemoryInline::FlatRead8(r5_addr_1);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    r0 = (r4 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013D7BC;
    }
}

loc_8013D7B4:
{
    r3 = 4;
    goto loc_8013D890;
}

loc_8013D7BC:
{
    r0 = MemoryInline::FlatRead8((r29 + 32));
    r3 = (r31 & 255);
}

loc_8013D7C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8013D7F8;
    }
}

loc_8013D7CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8013D7D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013D7F0;
    }
}

loc_8013D7D4:
{
    r3 = MemoryInline::FlatRead16((r29 + 30));
    r0 = MemoryInline::FlatRead16(r28);
}

loc_8013D7E0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_8013D7F8;
    }
}

loc_8013D7E4:
{
    r0 = MemoryInline::FlatRead16((r28 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8013D7EC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8013D7F8;
    }
}

loc_8013D7F0:
{
    r3 = 0;
    goto loc_8013D890;
}

loc_8013D7F8:
{
}

loc_8013D7FC:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(128))) {
        goto loc_8013D850;
    }
}

loc_8013D800:
{
    r3 = 0x80330000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 2040);
    r3 = (r3 + 25208);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1368));
    r0 = (r0 & 1);
}

loc_8013D818:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013D850;
    }
}

loc_8013D81C:
{
    r4 = MemoryInline::FlatRead16(r28);
    r5 = (r27 * 10);
    r3 = MemoryInline::FlatRead16((r28 + 2));
    r0 = 1;
    addr_sthux_8013D82C_loc_0 = (r5 + r29);
    MemoryInline::FlatWrite16(addr_sthux_8013D82C_loc_0, static_cast<uint16_t>(r4));
    r5 = addr_sthux_8013D82C_loc_0;
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r3));
    r4 = MemoryInline::FlatRead16((r28 + 4));
    r3 = MemoryInline::FlatRead16((r28 + 6));
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r28 + 8));
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r29 + 33), static_cast<uint8_t>(r0));
}

loc_8013D850:
{
    r0 = MemoryInline::FlatRead8((r29 + 32));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8013D858:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013D878;
    }
}

loc_8013D85C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_8013D860:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013D878;
    }
}

loc_8013D864:
{
    r3 = 0x80330000u;
    r3 = (r3 + 25208);
    r0 = MemoryInline::FlatRead8((r3 + 1380));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_8013D874:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013D880;
    }
}

loc_8013D878:
{
    r3 = 13;
    goto loc_8013D890;
}

loc_8013D880:
{
    r3 = r27;
    r4 = r30;
    r5 = r28;
    ctx->lr = 0x8013D890u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8013DDA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8013D890:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFC001BFB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8013D6D8 func_8013D6D8 preserves=true fpr_mask=0x00000000
