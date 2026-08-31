#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A4A18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807A4A18;

loc_807A4A18:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 21600);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 176), 0, 36u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 180));
    r0 = MemoryInline::FlatRead32((r3 + 120));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r31 + 176));
    r0 = (r0 | 67371008);
    MemoryInline::FlatWrite32((r3 + 120), r0);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 148));
    f2.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 184));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 464), f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807A4A64:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807A4A6C;
    }
}

loc_807A4A68:
{
    MemoryInline::FlatWriteFloat32((r3 + 464), f0.d);
}

loc_807A4A6C:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r3 & 32);
}

loc_807A4A78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A4AD8;
    }
}

loc_807A4A7C:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 148));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 12u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 192));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r31 + 188));
        }
    }
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_807A4A94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807A4A9C;
    }
}

loc_807A4A98:
{
    goto loc_807A4AB0;
}

loc_807A4A9C:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 196));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_807A4AA4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807A4AAC;
    }
}

loc_807A4AA8:
{
    goto loc_807A4AB0;
}

loc_807A4AAC:
{
    f3.d = f0.d;
}

loc_807A4AB0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 200));
    r3 = r30;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 204));
    r5 = 2;
    r6 = 0;
    ctx->lr = 0x807A4AC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B7104u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 90;
    MemoryInline::FlatWrite32((r30 + 476), r0);
    r3 = 0;
    goto loc_807A4B30;
}

loc_807A4AD8:
{
    r0 = (r3 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A4ADC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807A4B00;
    }
}

loc_807A4AE0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 200));
    r3 = r30;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 204));
    r5 = 3;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 196));
    r6 = 1;
    ctx->lr = 0x807A4AFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B7104u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_807A4B1C;
}

loc_807A4B00:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 208));
    r3 = r30;
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 204));
    r5 = 3;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 196));
    r6 = 1;
    ctx->lr = 0x807A4B1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B7104u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807A4B1C:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = r30;
    r4 = 256;
    ctx->lr = 0x807A4B2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x807A2F18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1;
}

loc_807A4B30:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF9F gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFF9 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807A4A18 func_807A4A18 preserves=true fpr_mask=0x00000000
