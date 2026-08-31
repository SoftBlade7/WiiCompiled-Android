#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806C5BCC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806C5BCC;

loc_806C5BCC:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = r3;
    r6 = MemoryInline::FlatRead32((r3 + 176));
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 1080), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r6 + 1080));
            r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r6 + 1084));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 28), r4);
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r6 + 1088));
            r4 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r6 + 1092));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    MemoryInline::FlatWriteRam32((r1 + 32), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r6 + 1096));
            r4 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r6 + 1100));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 44), r4);
    MemoryInline::FlatWriteRam32((r1 + 40), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r6 + 1104));
            r4 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r6 + 1108));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 52), r4);
    MemoryInline::FlatWriteRam32((r1 + 48), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r6 + 1112));
            r4 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r6 + 1116));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 60), r4);
    MemoryInline::FlatWriteRam32((r1 + 56), r5);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r6 + 1120));
            r4 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r6 + 1124));
        }
    }
    MemoryInline::FlatWriteRam32((r1 + 68), r4);
    MemoryInline::FlatWriteRam32((r1 + 64), r5);
    r5 = MemoryInline::FlatRead32((r3 + 180));
    r4 = MemoryInline::FlatRead16((r5 + 44));
    r4 = (r4 | 4);
    MemoryInline::FlatWrite16((r5 + 44), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r5 + 84), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    MemoryInline::FlatWriteFloat32((r5 + 88), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32((r5 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    MemoryInline::FlatWriteFloat32((r5 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteFloat32((r5 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r5 + 104), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteFloat32((r5 + 108), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::FlatWriteFloat32((r5 + 112), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteFloat32((r5 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    MemoryInline::FlatWriteFloat32((r5 + 120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    MemoryInline::FlatWriteFloat32((r5 + 124), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    MemoryInline::FlatWriteFloat32((r5 + 128), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    MemoryInline::FlatWriteFloat32((r5 + 132), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteFloat32((r5 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::FlatWriteFloat32((r5 + 52), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    MemoryInline::FlatWriteFloat32((r5 + 56), f0.d);
    r4 = MemoryInline::FlatRead32((r3 + 176));
    r0 = MemoryInline::FlatRead16((r4 + 180));
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_806C5CE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806C5CFC;
    }
}

loc_806C5CE8:
{
    r3 = MemoryInline::FlatRead32((r3 + 192));
    r5 = (r4 + 1068);
    r4 = 0;
    ctx->lr = 0x806C5CF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F43E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    goto loc_806C5D0C;
}

loc_806C5CFC:
{
    r3 = MemoryInline::FlatRead32((r3 + 192));
    r5 = (r4 + 1056);
    r4 = 0;
    ctx->lr = 0x806C5D0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F43E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
}

loc_806C5D0C:
{
    r5 = 0x802A0000u;
    r3 = MemoryInline::FlatRead32((r31 + 192));
    r5 = (r5 + 16640);
    r4 = 0;
    ctx->lr = 0x806C5D20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F451Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r31 + 192));
    r4 = 0;
    ctx->lr = 0x806C5D2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F4888u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r4 = 0x802A0000u;
    r3 = (r1 + 8);
    r4 = (r4 + 16688);
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = MemoryInline::FlatRead32((r31 + 192));
    r5 = (r1 + 8);
    r4 = 0;
    ctx->lr = 0x806C5D4Cu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x806F45A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r31 + 192));
    r4 = 0;
    r5 = 1;
    ctx->lr = 0x806C5D5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F4780u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r31 + 176));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 208));
    r4 = MemoryInline::FlatRead32((r31 + 192));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    MemoryInline::FlatWriteFloat32((r4 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    MemoryInline::FlatWriteFloat32((r4 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 56));
    MemoryInline::FlatWriteFloat32((r4 + 28), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 32), f1.d);
    r3 = MemoryInline::FlatRead32((r31 + 176));
    r0 = MemoryInline::FlatRead16((r3 + 180));
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_806C5D94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806C5DAC;
    }
}

loc_806C5D98:
{
    r4 = 0x808A0000u;
    r3 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -1600));
    MemoryInline::FlatWriteRamFloat32((r3 + 8904), f0.d);
    goto loc_806C5DBC;
}

loc_806C5DAC:
{
    r4 = 0x808C0000u;
    r3 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16040));
    MemoryInline::FlatWriteRamFloat32((r3 + 8904), f0.d);
}

loc_806C5DBC:
{
    r3 = MemoryInline::FlatRead32((r31 + 192));
    ctx->lr = 0x806C5DC4u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x806F49BCu>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    ctx->lr = 0x806C5DCCu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x806C63B0u>(ctx);
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
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 84));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFE fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806C5BCC func_806C5BCC preserves=true fpr_mask=0x00000000
