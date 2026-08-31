#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805750CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
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
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805750CC;

loc_805750CC:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r5 = 0x80890000u;
    r5 = (r5 + 6064);
    MemoryInline::FlatWriteRam32((r1 + 76), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 112));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_805750F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805752CC;
    }
}

loc_805750FC:
{
    r6 = MemoryInline::FlatRead32((r3 + 140));
    r4 = MemoryInline::FlatRead32((r6 + 20));
}

loc_80575108:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8057518C;
    }
}

loc_8057510C:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f2.d = MemoryInline::FlatReadFloat32(r6);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80575120:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057516C;
    }
}

loc_80575124:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r6 + 4), f0.d);
    r4 = MemoryInline::FlatRead32((r6 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80575140:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80575148;
    }
}

loc_80575144:
{
    MemoryInline::FlatWriteFloat32((r6 + 4), f1.d);
}

loc_80575148:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r6 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r6 + 8), f0.d);
    r4 = MemoryInline::FlatRead32((r6 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80575164:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057516C;
    }
}

loc_80575168:
{
    MemoryInline::FlatWriteFloat32((r6 + 8), f1.d);
}

loc_8057516C:
{
    f1.d = MemoryInline::FlatReadFloat32(r6);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r6, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r6 + 16));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80575184:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057518C;
    }
}

loc_80575188:
{
    MemoryInline::FlatWriteFloat32(r6, f1.d);
}

loc_8057518C:
{
    r4 = MemoryInline::FlatRead32((r3 + 140));
    r0 = MemoryInline::FlatRead32((r3 + 112));
    f5.d = MemoryInline::FlatReadFloat32(r4);
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 48u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r5 + 36));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_805751A0:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 116));
    f1.d = PpcFmulsInline(f4.d, f5.d);
    f31.d = PpcFmulsInline(f0.d, f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805751DC;
    }
}

loc_805751B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_805751B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805751DC;
    }
}

loc_805751B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_805751BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805751F4;
    }
}

loc_805751C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_805751C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80575240;
    }
}

loc_805751C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805751CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057528C;
    }
}

loc_805751D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805751D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805752A4;
    }
}

loc_805751D8:
{
    goto loc_805752BC;
}

loc_805751DC:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r5);
    f2.d = f31.d;
    r3 = (r3 + 124);
    f3.d = f1.d;
    ctx->lr = 0x805751F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80239F58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    goto loc_805752BC;
}

loc_805751F4:
{
    f2.d = (-(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r5 + 40));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r5);
    r3 = (r1 + 56);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = f1.d;
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f2.d = PpcFmulsInline(f4.d, f0.d);
    ctx->lr = 0x80575218u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80239F58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = 0x802A0000u;
    r3 = (r1 + 56);
    r4 = (r4 + 16712);
    r5 = (r1 + 40);
    ctx->lr = 0x8057522Cu;
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
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8023A2D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    f1.d = f31.d;
    r3 = (r31 + 124);
    r4 = (r1 + 40);
    ctx->lr = 0x8057523Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023A0A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    goto loc_805752BC;
}

loc_80575240:
{
    f2.d = (-(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r5 + 44));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r5);
    r3 = (r1 + 24);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f2.d = f1.d;
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f3.d = PpcFmulsInline(f4.d, f0.d);
    ctx->lr = 0x80575264u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80239F58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = 0x802A0000u;
    r3 = (r1 + 24);
    r4 = (r4 + 16688);
    r5 = (r1 + 8);
    ctx->lr = 0x80575278u;
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
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8023A2D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    f1.d = f31.d;
    r3 = (r31 + 124);
    r4 = (r1 + 8);
    ctx->lr = 0x80575288u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023A0A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    goto loc_805752BC;
}

loc_8057528C:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r5);
    f1.d = PpcFmulsInline(f0.d, f31.d);
    r3 = (r3 + 124);
    f3.d = f2.d;
    ctx->lr = 0x805752A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80239F58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    goto loc_805752BC;
}

loc_805752A4:
{
    f0.d = (-(f0.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r5);
    r3 = (r3 + 124);
    f3.d = f2.d;
    f1.d = PpcFmulsInline(f0.d, f31.d);
    ctx->lr = 0x805752BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80239F58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
}

loc_805752BC:
{
    r3 = r31;
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    r4 = (r31 + 124);
    ctx->lr = 0x805752CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    InvokeDirectCpu<0x8059FC48u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
}

loc_805752CC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 100));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    ctx->lr = r0;
    r1 = (r1 + 96);
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
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000007F gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0xF800003F fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805750CC func_805750CC preserves=false fpr_mask=0x80000000
