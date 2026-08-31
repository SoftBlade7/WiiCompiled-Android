#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079455C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8079455C;

loc_8079455C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x808A0000u;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 600;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 19672));
    r6 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 342), 0, 38u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 342), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r3 + 378), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 344), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 6u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 6u, (r3 + 348), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 10u, (r3 + 352), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 14u, (r3 + 356), f0.d);
    goto loc_807945B0;
}

loc_807945A0:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 131070);
    r4 = (r3 + r0);
    MemoryInline::FlatWrite16((r4 + 372), static_cast<uint16_t>(r6));
    r6 = (r6 + 1);
}

loc_807945B0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 80), 0, 144u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 80));
    r4 = (r6 & 65535);
}

loc_807945BC:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_807945A0;
    }
}

loc_807945C0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 140u, (r3 + 220));
    r5 = r31;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 100u, (r3 + 180));
    r6 = 0;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r3 + 100));
    f6.d = PpcFmulsInline(f1.d, f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r3 + 104));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r3 + 108));
        }
    }
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r3 + 124));
    f5.d = PpcFmulsInline(f2.d, f6.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r3 + 128));
    f3.d = PpcFmulsInline(f0.d, f6.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 52u, (r3 + 132));
    f1.d = PpcFmulsInline(f1.d, f6.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 18u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 18u, (r3 + 360), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 22u, (r3 + 364), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 26u, (r3 + 368), f0.d);
    goto loc_80794638;
}

loc_80794614:
{
    r4 = MemoryInline::FlatRead32((r5 + 32));
    r5 = (r5 + 4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r3 + 124));
    r6 = (r6 + 1);
    MemoryInline::FlatWriteFloat32((r4 + 68), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r3 + 128));
    MemoryInline::FlatWriteFloat32((r4 + 72), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 52u, (r3 + 132));
    MemoryInline::FlatWriteFloat32((r4 + 76), f0.d);
}

loc_80794638:
{
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 80));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_80794640:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80794614;
    }
}

loc_80794644:
{
    r3 = r31;
    ctx->lr = 0x8079464Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807941F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = r31;
    // inline leaf 0x80590650 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80590650
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80794658:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80794680;
    }
}

loc_8079465C:
{
    r3 = r31;
    // inline leaf 0x80590794 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80590794
    r12 = MemoryInline::FlatRead32(r3);
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 19672));
    r4 = 246;
    r12 = MemoryInline::FlatRead32((r12 + 224));
    ctr = r12;
    ctx->lr = 0x80794680u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80794680:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8079455C func_8079455C preserves=true fpr_mask=0x00000000
