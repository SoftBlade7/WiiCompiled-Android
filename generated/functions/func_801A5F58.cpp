#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801A5F58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801A5F58;

loc_801A5F58:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r30 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_801A5F74:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A6054;
    }
}

loc_801A5F8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A5FA8;
    }
}

loc_801A5F90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_801A5F94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A5FD0;
    }
}

loc_801A5F98:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A6090;
    }
}

loc_801A5F9C:
{
}

loc_801A5FA0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_801A5FB8;
    }
}

loc_801A5FA4:
{
    goto loc_801A6090;
}

loc_801A5FA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_801A5FAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A607C;
    }
}

loc_801A5FB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A6090;
    }
}

loc_801A5FB4:
{
    goto loc_801A6068;
}

loc_801A5FB8:
{
    r30 = MemoryInline::FlatRead8(r4);
    r31 = MemoryInline::FlatRead32((r13 + -25372));
}

loc_801A5FC4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_801A6090;
    }
}

loc_801A5FC8:
{
    r27 = (r4 + 1);
    goto loc_801A6090;
}

loc_801A5FD0:
{
    r30 = MemoryInline::FlatRead8(r4);
    r31 = MemoryInline::FlatRead32((r13 + -25376));
}

loc_801A5FDC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_801A6090;
    }
}

loc_801A5FE0:
{
}

loc_801A5FE4:
{
    r27 = (r4 + 1);
    r0 = 0;
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(129))) {
        goto loc_801A5FF8;
    }
}

loc_801A5FF0:
{
}

loc_801A5FF4:
{
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(159))) {
        goto loc_801A6008;
    }
}

loc_801A5FF8:
{
}

loc_801A5FFC:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(224))) {
        goto loc_801A600C;
    }
}

loc_801A6000:
{
}

loc_801A6004:
{
    if ((static_cast<uint32_t>(r30) > static_cast<uint32_t>(252))) {
        goto loc_801A600C;
    }
}

loc_801A6008:
{
    r0 = 1;
}

loc_801A600C:
{
}

loc_801A6010:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A6090;
    }
}

loc_801A6014:
{
    r3 = MemoryInline::FlatRead8(r27);
    r0 = 0;
}

loc_801A6020:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(64))) {
        goto loc_801A6038;
    }
}

loc_801A6024:
{
}

loc_801A6028:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(252))) {
        goto loc_801A6038;
    }
}

loc_801A602C:
{
}

loc_801A6030:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(127))) {
        goto loc_801A6038;
    }
}

loc_801A6034:
{
    r0 = 1;
}

loc_801A6038:
{
}

loc_801A603C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A6090;
    }
}

loc_801A6040:
{
    r0 = MemoryInline::FlatRead8(r27);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(8));
    r0_mrot_1 = (r0_rot_1 & 16776960);
    r0_mdest_1 = (r0 & -16776961);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r27 = (r27 + 1);
    r30 = (r0 & 65535);
    goto loc_801A6090;
}

loc_801A6054:
{
    r3 = r27;
    r4 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801AB410u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r27 = r3;
    goto loc_801A6090;
}

loc_801A6068:
{
    r3 = r27;
    r4 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801AB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r27 = r3;
    goto loc_801A6090;
}

loc_801A607C:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_801A6084:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A6090;
    }
}

loc_801A608C:
{
    r27 = (r4 + 4);
}

loc_801A6090:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801A6098:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A60E4;
    }
}

loc_801A609C:
{
    r31 = MemoryInline::FlatRead32((r13 + -25372));
    r26 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801AB590u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r30 = (r3 & 255);
}

loc_801A60AC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_801A60C8;
    }
}

loc_801A60B0:
{
    r0 = MemoryInline::FlatRead32((r13 + -25380));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A60B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A60E4;
    }
}

loc_801A60BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(127));
}

loc_801A60C4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801A60E4;
    }
}

loc_801A60C8:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    // inline leaf 0x801AB608 (16 guest instruction(s))
}

loc_inl1_0x801AB608:
{
    r0 = 65536;
}

loc_inl1_0x801AB610:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x801AB61C;
    }
}

loc_inl1_0x801AB614:
{
    r3 = 0;
    goto loc_inl1_cont_801AB608;
}

loc_inl1_0x801AB61C:
{
    r4 = 0x802A0000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(26));
    r0 = (r0_rot_3 & 1020);
    r4 = (r4 + -15472);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
}

loc_inl1_0x801AB630:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x801AB640;
    }
}

loc_inl1_0x801AB634:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 510);
    r4_addr_2 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_2);
    goto loc_inl1_cont_801AB608;
}

loc_inl1_0x801AB640:
{
    r3 = 0;
}

loc_inl1_cont_801AB608:
{
    // end of inlined leaf 0x801AB608
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801A60D4:
{
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801A60E4;
    }
}

loc_801A60DC:
{
    r26 = 1;
    r31 = MemoryInline::FlatRead32((r13 + -25376));
}

loc_801A60E4:
{
    MemoryInline::FlatWrite32(r28, r31);
    r3 = r26;
    r4 = (r30 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A56DCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    MemoryInline::FlatWrite32(r29, r3);
    r11 = (r1 + 48);
    r3 = r27;
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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

// RECOMP_GUEST_ABI gpr_read=0xFC0020FB gpr_write=0xFC0008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A5F58 func_801A5F58 preserves=true fpr_mask=0x00000000
