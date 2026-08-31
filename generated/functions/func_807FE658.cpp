#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807FE658(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807FE658;

loc_807FE658:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    ctx->lr = 0x807FE67Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081A980u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r30 + 84));
    r5 = 0x808D0000u;
    r4 = MemoryInline::FlatRead32((r30 + 48));
    r5 = (r5 + 18920);
    r3 = MemoryInline::FlatRead32((r30 + 52));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807FE694:
{
    r0 = MemoryInline::FlatRead32((r30 + 56));
    MemoryInline::FlatWrite32(r30, r5);
    MemoryInline::FlatWrite32((r30 + 260), r4);
    MemoryInline::FlatWrite32((r30 + 264), r3);
    MemoryInline::FlatWrite32((r30 + 268), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807FE6B4;
    }
}

loc_807FE6AC:
{
    r3 = (r30 + 72);
    goto loc_807FE6E4;
}

loc_807FE6B4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 84), static_cast<uint8_t>(r0));
    r3 = (r1 + 8);
    r4 = (r30 + 88);
    ctx->lr = 0x807FE6C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8067EAECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = (r30 + 72);
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r30 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r30 + 80), f0.d);
}

loc_807FE6E4:
{
    r8 = MemoryInline::FlatRead32(r3);
    r0 = 0;
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r6 = MemoryInline::FlatRead32((r3 + 8));
    r5 = MemoryInline::FlatRead32((r30 + 60));
    r4 = MemoryInline::FlatRead32((r30 + 64));
    r3 = MemoryInline::FlatRead32((r30 + 68));
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 272), 0, 30u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r30 + 272), r8);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r30 + 276), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r30 + 280), r6);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r30 + 284), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r30 + 288), r4);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r30 + 292), r3);
    }
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead16((r3 + 48));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 24u, (r30 + 296), r3);
        MemoryInline::WriteResolved16(guest_range_0, 26u, (r30 + 298), r0);
    }
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead16((r3 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r30 + 300), static_cast<uint16_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_807FE738:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead16((r3 + 50));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r30 + 302), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead16((r3 + 46));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r30 + 304), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead16((r3 + 52));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r30 + 306), static_cast<uint16_t>(r0));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807FE768;
    }
}

loc_807FE760:
{
    r0 = 2;
    MemoryInline::FlatWrite16((r30 + 300), static_cast<uint16_t>(r0));
}

loc_807FE768:
{
    r0 = MemoryInline::FlatRead16((r30 + 302));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_807FE770:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807FE77C;
    }
}

loc_807FE774:
{
    r0 = 2;
    MemoryInline::FlatWrite16((r30 + 302), static_cast<uint16_t>(r0));
}

loc_807FE77C:
{
    r3 = MemoryInline::FlatRead16((r30 + 300));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r5 = 1127219200;
    r0 = MemoryInline::FlatRead16((r30 + 302));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r6 = 0x808B0000u;
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r0 = (r0 ^ -2147483648);
    r4 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    r3 = r30;
    f3.d = MemoryInline::FlatReadFloat64((r6 + -21200));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r4 + -21204));
    MemoryInline::FlatWriteRam32((r1 + 32), r5);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 308), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 312), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r0 = MemoryInline::FlatRead32((r1 + 52));
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807FE658 func_807FE658 preserves=true fpr_mask=0x00000000
