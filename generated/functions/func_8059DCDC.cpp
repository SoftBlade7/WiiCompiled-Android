#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8059DCDC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8059DCDC;

loc_8059DCDC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -208), 0, 216u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 212u, (r1 + 212), r0);
    MemoryInline::WriteResolved32(guest_range_0, 204u, (r1 + 204), r31);
    r31 = r3;
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r1 + 92), r0);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r1 + 88), r4);
    }
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = r31;
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r1 + 96), r0);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r6 = MemoryInline::FlatRead32((r3 + 240));
    r5 = 0x802A0000u;
    r0 = MemoryInline::FlatRead32((r3 + 244));
    r4 = (r1 + 48);
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r5 = (r5 + 16712);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r6);
    r0 = MemoryInline::FlatRead32((r3 + 248));
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 252));
    r3 = (r1 + 32);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r1 + 60), f0.d);
    ctx->lr = 0x8059DD48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x805147FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r4 = 0x809C0000u;
    r5 = 0x802A0000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 6504));
    r3 = (r1 + 20);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r4 = (r1 + 48);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    r5 = (r5 + 16688);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    ctx->lr = 0x8059DD88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x805147FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = 0x809C0000u;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 6500));
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    r4 = (r1 + 76);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    r5 = (r1 + 64);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    // inline leaf 0x80514838 (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x80514838
    f3.d = MemoryInline::FlatReadFloat32((r1 + 88));
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = 0x809C0000u;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 92));
    r8 = 0x808A0000u;
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8104));
    r0 = 0;
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 96));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r7 = 0x80890000u;
    r5 = 0x809C0000u;
    r6 = 552075264;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r7 + 8164));
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f4.d);
    r4 = (r1 + 88);
    r3 = MemoryInline::FlatRead32((r3 + 12100));
    r5 = (r5 + 15364);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f3.d);
    r6 = (r6 + 3583);
    r8 = MemoryInline::FlatRead32((r8 + 26316));
    r7 = (r1 + 100);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f2.d);
    r9 = 0;
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 120), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    ctx->lr = 0x8059DE54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8078F500u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32(r31);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8059DE64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8059DE84;
    }
}

loc_8059DE68:
{
    r0 = MemoryInline::FlatRead16((r31 + 22));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8059DE70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8059DE84;
    }
}

loc_8059DE74:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8059DE78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059DE84;
    }
}

loc_8059DE7C:
{
    r3 = 1;
    goto loc_8059DE88;
}

loc_8059DE84:
{
    r3 = 0;
}

loc_8059DE88:
{
    r0 = MemoryInline::FlatRead32((r1 + 212));
    r31 = MemoryInline::FlatRead32((r1 + 204));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFC0F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFC000 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8059DCDC func_8059DCDC preserves=true fpr_mask=0x00000000
