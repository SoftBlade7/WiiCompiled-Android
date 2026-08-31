#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807CE5A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_807CE5A4;

loc_807CE5A4:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 776));
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 36), 0, 52u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r30 + 84));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 780));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 828));
    MemoryInline::FlatWriteFloat32((r29 + 776), f1.d);
    f4.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r30 + 84));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 824), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 780), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r30 + 68));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_807CE5E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE5E8;
    }
}

loc_807CE5E4:
{
    goto loc_807CE5EC;
}

loc_807CE5E8:
{
    f4.d = f0.d;
}

loc_807CE5EC:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32((r29 + 828), f4.d);
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807CE5F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE604;
    }
}

loc_807CE5FC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r30 + 36));
    goto loc_807CE608;
}

loc_807CE604:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r30 + 40));
}

loc_807CE608:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_807CE610:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807CE61C;
    }
}

loc_807CE614:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r30 + 48));
    goto loc_807CE620;
}

loc_807CE61C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r30 + 52));
}

loc_807CE620:
{
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f5.d = MemoryInline::FlatReadFloat32((r29 + 784));
    f6.d = MemoryInline::FlatReadFloat32((r29 + 828));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 792));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 788));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 796));
    f4.d = PpcFmulsInline(f6.d, f4.d);
    f0.d = PpcFmulsInline(f6.d, f0.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 784), f4.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r30 + 44));
    f2.d = PpcFmulsInline(f30.d, f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 792), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = PpcFmulsInline(f6.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 788), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r30 + 56));
    f0.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f6.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 796), f0.d);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 52), 0, 100u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 76u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 60u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 44u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 12u, (r1 + 64));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 60));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 56));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 96u, (r1 + 148));
    r29 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0000002 gpr_write=0xE0000003 gpr_return=0x00000000 fpr_read=0xC0000013 fpr_write=0xF800007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807CE5A4 func_807CE5A4 preserves=true fpr_mask=0x00000000
