#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A2270(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    goto loc_807A2270;

loc_807A2270:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r7 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r7 = (r7 + 20992);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 80));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 88));
    f3.d = PpcFmulsInline(f3.d, f0.d);
    guest_range_0 = MemoryInline::ResolveRangeHost(r7, 0, 132u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r7);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807A22A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807A2308;
    }
}

loc_807A22AC:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 112u, (r7 + 112));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_807A22BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A22C8;
    }
}

loc_807A22C0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r7 + 116));
    goto loc_807A22E0;
}

loc_807A22C8:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 116u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 120u, (r7 + 120));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r7 + 116));
        }
    }
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
}

loc_807A22E0:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r7 + 116));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_807A22E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807A22F0;
    }
}

loc_807A22EC:
{
    goto loc_807A230C;
}

loc_807A22F0:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 124u, (r7 + 124));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_807A22F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807A2300;
    }
}

loc_807A22FC:
{
    goto loc_807A230C;
}

loc_807A2300:
{
    f3.d = f0.d;
    goto loc_807A230C;
}

loc_807A2308:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 116u, (r7 + 116));
}

loc_807A230C:
{
    r5 = MemoryInline::FlatRead32(r4);
    r3 = (r3 + 80);
    r6 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r4 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r5 = (r1 + 8);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 112u, (r7 + 112));
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 128u, (r7 + 128));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x807A233Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x807DE934u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF9E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807A2270 func_807A2270 preserves=true fpr_mask=0x00000000
