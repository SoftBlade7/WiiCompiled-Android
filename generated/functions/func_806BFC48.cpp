#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806BFC48(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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

    goto loc_806BFC48;

loc_806BFC48:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r10 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r10 = (r10 + -2904);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    MemoryInline::FlatWriteRam32((r1 + 72), r30);
    MemoryInline::FlatWriteRam32((r1 + 68), r29);
    MemoryInline::FlatWriteRam32((r1 + 64), r28);
    r0 = MemoryInline::FlatRead32((r3 + 224));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806BFC74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806BFCA0;
    }
}

loc_806BFC78:
{
    r4 = MemoryInline::FlatRead32((r10 + 24));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 32), r4);
    r4 = (r1 + 32);
    r5 = (r1 + 28);
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r7 = 0;
    ctx->lr = 0x806BFC9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    InvokeDirectCpu<0x80820EB8u>(ctx);
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
    goto loc_806BFD70;
}

loc_806BFCA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_806BFCA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806BFCD0;
    }
}

loc_806BFCA8:
{
    r4 = MemoryInline::FlatRead32((r10 + 44));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    r4 = (r1 + 24);
    r5 = (r1 + 20);
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r7 = 0;
    ctx->lr = 0x806BFCCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    InvokeDirectCpu<0x80820EB8u>(ctx);
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
    goto loc_806BFD70;
}

loc_806BFCD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_806BFCD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806BFD00;
    }
}

loc_806BFCD8:
{
    r4 = MemoryInline::FlatRead32((r10 + 60));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    r4 = (r1 + 16);
    r5 = (r1 + 12);
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r7 = 0;
    ctx->lr = 0x806BFCFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    InvokeDirectCpu<0x80820EB8u>(ctx);
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
    goto loc_806BFD70;
}

loc_806BFD00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_806BFD04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806BFD70;
    }
}

loc_806BFD08:
{
    r5 = (r10 + 108);
    r9 = (r10 + 120);
    r8 = (r10 + 132);
    guest_range_0 = MemoryInline::ResolveRangeHost((r10 + 108), 0, 27u, true, false);
    r28 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r10 + 108));
    r31 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r10 + 120));
    r4 = (r1 + 48);
    r29 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
    r7 = (r1 + 8);
    r30 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r5 + 8));
    r5 = (r1 + 36);
    r12 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r9 + 4));
    r6 = 3;
    r11 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r9 + 8));
    r10 = MemoryInline::ReadResolved8(guest_range_0, 24u, (r10 + 132));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 25u, (r8 + 1));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 26u, (r8 + 2));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 52u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 48), r28);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 52), r29);
    }
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 56), r30);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 36), r31);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 40), r12);
    }
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 44), r11);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r1 + 8), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r1 + 9), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r1 + 10), static_cast<uint8_t>(r0));
    ctx->lr = 0x806BFD70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    InvokeDirectCpu<0x80820EB8u>(ctx);
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
}

loc_806BFD70:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    r28 = MemoryInline::FlatRead32((r1 + 64));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806BFC48 func_806BFC48 preserves=true fpr_mask=0x00000000
