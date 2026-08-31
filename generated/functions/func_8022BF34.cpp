#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022BF34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8022BF34;

loc_8022BF34:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = MemoryInline::FlatRead16((r3 + 118));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (r5 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8022BF48:
{
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022C078;
    }
}

loc_8022BF5C:
{
    r0 = (r5 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8022BF60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022C078;
    }
}

loc_8022BF64:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80077660u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead16((r30 + 118));
    r0 = (r0 & 512);
}

loc_8022BF74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8022BF84;
    }
}

loc_8022BF78:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_8022BF84:
{
    r0 = MemoryInline::FlatRead16((r30 + 118));
    r0 = (r0 & 1024);
}

loc_8022BF8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8022BF9C;
    }
}

loc_8022BF90:
{
    r0 = MemoryInline::FlatRead32(r31);
    r0 = (r0 | 32);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_8022BF9C:
{
    r0 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r7 = MemoryInline::FlatRead8((r30 + 136));
    r4 = (r1 + 8);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32(r31, r0);
    r6 = MemoryInline::FlatRead8((r30 + 137));
    r5 = MemoryInline::FlatRead8((r30 + 138));
    r0 = MemoryInline::FlatRead8((r30 + 139));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    ctx->lr = 0x8022BFD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80077680u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r0 = MemoryInline::FlatRead16((r30 + 118));
    r0 = (r0 & 128);
}

loc_8022BFDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8022BFF8;
    }
}

loc_8022BFE0:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 80));
    r3 = r31;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 84));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 88));
    ctx->lr = 0x8022BFF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80077790u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    goto loc_8022C01C;
}

loc_8022BFF8:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 68));
    r3 = r31;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25096));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022C008:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8022C010;
    }
}

loc_8022C00C:
{
    goto loc_8022C014;
}

loc_8022C010:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -25044));
}

loc_8022C014:
{
    r4 = MemoryInline::FlatRead32((r30 + 104));
    ctx->lr = 0x8022C01Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80077750u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8022C01C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 56), 0, 64u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 62u, (r30 + 118));
    r0 = (r0 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8022C024:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022C040;
    }
}

loc_8022C028:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r30 + 92));
    r3 = r31;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r30 + 96));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r30 + 100));
        }
    }
    ctx->lr = 0x8022C03Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80077810u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    goto loc_8022C05C;
}

loc_8022C040:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r30 + 56));
    r3 = r31;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r30 + 72));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r30 + 76));
        }
    }
    f1.d = PpcFmulsInline(f0.d, f1.d);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r30 + 108));
    ctx->lr = 0x8022C05Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800777D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
}

loc_8022C05C:
{
    r0 = MemoryInline::FlatRead16((r30 + 118));
    r0 = (r0 & 2048);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8022C064:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022C084;
    }
}

loc_8022C068:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 112));
    r3 = r31;
    ctx->lr = 0x8022C074u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    InvokeDirectCpu<0x80077890u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    goto loc_8022C084;
}

loc_8022C078:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 & -5);
    MemoryInline::FlatWrite32(r4, r0);
}

loc_8022C084:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFDFFF gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0xFF8003FF fpr_write=0xFF8003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8022BF34 func_8022BF34 preserves=true fpr_mask=0x00000000
