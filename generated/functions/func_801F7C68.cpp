#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F7C68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_801F7D7C_loc_0 = 0;
    uint32_t addr_801F7D84_loc_0 = 0;
    uint32_t addr_801F7D8C_loc_0 = 0;
    uint32_t addr_801F7D94_loc_0 = 0;
    uint32_t addr_801F7D9C_loc_0 = 0;
    uint32_t addr_801F7DA8_loc_0 = 0;
    uint32_t addr_801F7DB0_loc_0 = 0;
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
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F7C68;

loc_801F7C68:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F7C74:
{
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 52), r29);
    MemoryInline::FlatWriteRam32((r1 + 48), r28);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F7C98;
    }
}

loc_801F7C90:
{
    r3 = 10;
    goto loc_801F7E00;
}

loc_801F7C98:
{
    r31 = MemoryInline::FlatRead32((r3 + 556));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801F7CA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F7CAC;
    }
}

loc_801F7CA4:
{
    r3 = 10;
    goto loc_801F7E00;
}

loc_801F7CAC:
{
    r5 = MemoryInline::FlatRead16((r31 + 36));
    r0 = MemoryInline::FlatRead32((r31 + 48));
    r6 = MemoryInline::FlatRead32((r3 + 568));
    r0 = (r0 - r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_801F7CC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801F7CCC;
    }
}

loc_801F7CC4:
{
    r3 = 28;
    goto loc_801F7E00;
}

loc_801F7CCC:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_801F7CD4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801F7CE0;
    }
}

loc_801F7CD8:
{
    r3 = 16;
    goto loc_801F7E00;
}

loc_801F7CE0:
{
    r0 = MemoryInline::FlatRead32((r3 + 564));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801F7CE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F7CF4;
    }
}

loc_801F7CEC:
{
    r3 = 14;
    goto loc_801F7E00;
}

loc_801F7CF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F7CF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F7D08;
    }
}

loc_801F7CFC:
{
    r0 = MemoryInline::FlatRead8((r3 + 540));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite8((r3 + 540), static_cast<uint8_t>(r0));
}

loc_801F7D08:
{
    r5 = MemoryInline::FlatRead8((r30 + 540));
    r3 = (r1 + 16);
    r4 = (r30 + 526);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80203644u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r1 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(229));
}

loc_801F7D20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F7D2C;
    }
}

loc_801F7D24:
{
    r0 = 5;
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
}

loc_801F7D2C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 539), 0, 35u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r30 + 540));
    r3 = r31;
    r28 = (r1 + 30);
    r29 = (r1 + 32);
    MemoryInline::FlatWriteRam8((r1 + 27), static_cast<uint8_t>(r0));
    r12 = (r1 + 34);
    r11 = (r1 + 38);
    r6 = (r1 + 40);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r30 + 539));
    r5 = (r1 + 36);
    r0 = (r1 + 42);
    r4 = (r1 + 16);
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r7));
    r8 = (r1 + 8);
    r7 = 32;
    r9 = 0;
    r31 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r30 + 541));
    r10 = 0;
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r31));
    r31 = MemoryInline::ReadResolved16(guest_range_0, 3u, (r30 + 542));
    addr_801F7D7C_loc_0 = r28;
    PPC_StoreHalfwordByteReverse(addr_801F7D7C_loc_0, r31);
    r28 = MemoryInline::ReadResolved16(guest_range_0, 5u, (r30 + 544));
    addr_801F7D84_loc_0 = r29;
    PPC_StoreHalfwordByteReverse(addr_801F7D84_loc_0, r28);
    r28 = MemoryInline::ReadResolved16(guest_range_0, 7u, (r30 + 546));
    addr_801F7D8C_loc_0 = r12;
    PPC_StoreHalfwordByteReverse(addr_801F7D8C_loc_0, r28);
    r12 = MemoryInline::ReadResolved16(guest_range_0, 9u, (r30 + 548));
    addr_801F7D94_loc_0 = r11;
    PPC_StoreHalfwordByteReverse(addr_801F7D94_loc_0, r12);
    r11 = MemoryInline::ReadResolved16(guest_range_0, 11u, (r30 + 550));
    addr_801F7D9C_loc_0 = r6;
    PPC_StoreHalfwordByteReverse(addr_801F7D9C_loc_0, r11);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 25u, (r30 + 564));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r6 = (r6_rot_1 & 65535);
    addr_801F7DA8_loc_0 = r5;
    PPC_StoreHalfwordByteReverse(addr_801F7DA8_loc_0, r6);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 25u, (r30 + 564));
    addr_801F7DB0_loc_0 = r0;
    PPC_StoreHalfwordByteReverse(addr_801F7DB0_loc_0, r5);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 13u, (r30 + 552));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r5 = (r5_rot_1 & 16711680);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 65280);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r5_mrot_1 = (r5_rot_2 & -16777216);
    r5_mdest_1 = (r5 & 16777215);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r0_mrot_1 = (r0_rot_2 & 255);
    r0_mdest_1 = (r0 & -256);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0 = (r5 | r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 29u, (r30 + 568));
    r6 = MemoryInline::ReadResolved16(guest_range_0, 33u, (r30 + 572));
    ctx->lr = 0x801F7DDCu;
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x802053D4u>(ctx);
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F7DE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F7DE8;
    }
}

loc_801F7DE4:
{
    goto loc_801F7E00;
}

loc_801F7DE8:
{
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r4 + -32);
    r0 = (32 - r4);
    r0 = (r3 | r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 31);
    r3 = (r0 & 17);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F7E00:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r28 = MemoryInline::FlatRead32((r1 + 48));
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
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F7C68 func_801F7C68 preserves=true fpr_mask=0x00000000
