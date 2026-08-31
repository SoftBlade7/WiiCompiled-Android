#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8061A650(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8061A650;

loc_8061A650:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r7 = 1127219200;
    r6 = MemoryInline::FlatRead16((r4 + 12));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r8 = 0x80890000u;
    r0 = MemoryInline::FlatRead16((r4 + 24));
    r9 = (r6 * 60);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r5;
    r10 = MemoryInline::FlatRead8((r4 + 14));
    r0 = (r0 * 60);
    r6 = MemoryInline::FlatRead8((r4 + 26));
    r9 = (r10 + r9);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r11 = MemoryInline::FlatRead16((r4 + 16));
    r30 = r4;
    r0 = (r6 + r0);
    r4 = MemoryInline::FlatRead16((r4 + 28));
    r5 = (r9 * 1000);
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    f2.d = MemoryInline::FlatReadFloat64((r8 + 31480));
    MemoryInline::FlatWriteRam32((r1 + 16), r7);
    r0 = (r0 * 1000);
    r5 = (r11 + r5);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r29 = r3;
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80619FE8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 4;
    r5 = 0;
    ctr = r0;
}

loc_8061A6F0:
{
    r3 = (r30 + r5);
    r4 = (r29 + r5);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 124), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 124));
    r5 = (r5 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 192), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r4 + 192), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 125));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r4 + 193), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 126));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r4 + 194), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 127));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r4 + 195), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 128));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r4 + 196), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 129));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r4 + 197), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 130));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r4 + 198), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 131));
    r3 = (r30 + r5);
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r4 + 199), static_cast<uint8_t>(r0));
    r4 = (r29 + r5);
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 124), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r3 + 124));
    r5 = (r5 + 8);
    guest_range_3 = MemoryInline::ResolveRangeHost((r4 + 192), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r4 + 192), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r3 + 125));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r4 + 193), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r3 + 126));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r4 + 194), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r3 + 127));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r4 + 195), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 4u, (r3 + 128));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r4 + 196), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 5u, (r3 + 129));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r4 + 197), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 6u, (r3 + 130));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r4 + 198), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 7u, (r3 + 131));
    r3 = (r30 + r5);
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r4 + 199), static_cast<uint8_t>(r0));
    r4 = (r29 + r5);
    guest_range_4 = MemoryInline::ResolveRangeHost((r3 + 124), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_4, 0u, (r3 + 124));
    r5 = (r5 + 8);
    guest_range_5 = MemoryInline::ResolveRangeHost((r4 + 192), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, (r4 + 192), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r3 + 125));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r4 + 193), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r3 + 126));
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r4 + 194), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 3u, (r3 + 127));
    MemoryInline::WriteResolved8(guest_range_5, 3u, (r4 + 195), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 4u, (r3 + 128));
    MemoryInline::WriteResolved8(guest_range_5, 4u, (r4 + 196), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 5u, (r3 + 129));
    MemoryInline::WriteResolved8(guest_range_5, 5u, (r4 + 197), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 6u, (r3 + 130));
    MemoryInline::WriteResolved8(guest_range_5, 6u, (r4 + 198), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_4, 7u, (r3 + 131));
    MemoryInline::WriteResolved8(guest_range_5, 7u, (r4 + 199), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8061A6F0;
    }
}

loc_8061A7D8:
{
    r4 = (r30 + r5);
    r3 = (r29 + r5);
    r0 = MemoryInline::FlatRead8((r4 + 124));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8061A7E8:
{
    MemoryInline::FlatWrite8((r3 + 192), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 125));
    MemoryInline::FlatWrite8((r3 + 193), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 126));
    MemoryInline::FlatWrite8((r3 + 194), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 127));
    MemoryInline::FlatWrite8((r3 + 195), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061A834;
    }
}

loc_8061A808:
{
    r0 = MemoryInline::FlatRead32(r30);
    r3 = 1374420992;
    r3 = (r3 + -31457);
    r0 = (r0 * 150);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r3 = (r0 + r3);
    r0 = (r3 + 50);
    MemoryInline::FlatWrite32((r29 + 292), r0);
    goto loc_8061A85C;
}

loc_8061A834:
{
    r0 = MemoryInline::FlatRead32(r30);
    r3 = 1374420992;
    r3 = (r3 + -31457);
    r0 = (r0 * 105);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(5) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r3 = (r0 + r3);
    r0 = (r3 + 35);
    MemoryInline::FlatWrite32((r29 + 292), r0);
}

loc_8061A85C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000003B gpr_write=0xE0000FFB gpr_return=0x00000018 fpr_read=0x00000008 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8061A650 func_8061A650 preserves=true fpr_mask=0x00000000
