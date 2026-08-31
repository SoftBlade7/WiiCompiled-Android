#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80236CD8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_80236CD8;

loc_80236CD8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -24720), 0, 36u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -24712));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -24720));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 52));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80236D08:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80236D10;
    }
}

loc_80236D0C:
{
    goto loc_80236D14;
}

loc_80236D10:
{
    f1.d = f0.d;
}

loc_80236D14:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -24720));
    r4 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 68), 0, 9u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r3 + 76), static_cast<uint8_t>(r4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    SetCRFloatResident(cr, 0, f31.d, f2.d);
}

loc_80236D2C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80236D40;
    }
}

loc_80236D34:
{
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 68), r4);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 72), r4);
    }
    goto loc_80236DF4;
}

loc_80236D40:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -24708));
    SetCRFloatResident(cr, 0, f31.d, f1.d);
}

loc_80236D48:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80236D6C;
    }
}

loc_80236D50:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -24704));
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 68), r4);
    f31.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 72), r0);
    goto loc_80236DF4;
}

loc_80236D6C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -24700));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80236D74:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80236D9C;
    }
}

loc_80236D7C:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f1.d));
    r0 = 1;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -24704));
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 68), r4);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 72), r0);
    f31.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_80236DF4;
}

loc_80236D9C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -24696));
    SetCRFloatResident(cr, 0, f31.d, f1.d);
}

loc_80236DA4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80236DC8;
    }
}

loc_80236DAC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -24692));
    r0 = 2;
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 68), r4);
    f31.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 72), r0);
    goto loc_80236DF4;
}

loc_80236DC8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r2 + -24688));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80236DD0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80236DF4;
    }
}

loc_80236DD8:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f1.d));
    r0 = 2;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -24692));
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 68), r4);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 72), r0);
    f31.d = PpcFmulsInline(f0.d, f1.d);
}

loc_80236DF4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 48));
    r3 = (r1 + 12);
    r4 = (r31 + 40);
    r5 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80234E78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f1.d = f31.d;
    r3 = (r1 + 8);
    r4 = (r31 + 44);
    r5 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80234E78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_3, 0u, (r1 + 8));
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 56), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r31 + 56), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r1 + 9));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r31 + 57), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 2u, (r1 + 10));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r31 + 58), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 3u, (r1 + 11));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r31 + 59), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r1 + 12));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r31 + 60), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r1 + 13));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r31 + 61), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 6u, (r1 + 14));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r31 + 62), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 7u, (r1 + 15));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r31 + 63), static_cast<uint8_t>(r0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 24u, (r1 + 32));
    r31 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r1 + 28));
    r0 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800000DF gpr_write=0x800000FB gpr_return=0x00000018 fpr_read=0x80000027 fpr_write=0x8000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80236CD8 func_80236CD8 preserves=false fpr_mask=0x80000000
