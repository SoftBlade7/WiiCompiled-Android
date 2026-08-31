#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FB444(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_806FB444;

loc_806FB444:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f2.d = std::fabs(f1.d);
    f31.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 4344);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 108));
    f2.d = f31.d;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FB640u>(ctx);
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r30 + 84));
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    r0 = MemoryInline::FlatRead32(r30);
    r4 = 0x808A0000u;
    r4 = (r4 + 4528);
    r3 = MemoryInline::FlatRead32((r30 + 68));
    r0 = (r0 * 12);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    r0 = (r4 + 6);
}

loc_806FB4B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_806FB4C4;
    }
}

loc_806FB4B8:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r30 + 68), r0);
    goto loc_806FB500;
}

loc_806FB4C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 104));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_806FB4CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806FB4D8;
    }
}

loc_806FB4D0:
{
    MemoryInline::FlatWrite32((r30 + 68), r4);
    goto loc_806FB500;
}

loc_806FB4D8:
{
    r0 = MemoryInline::FlatRead8((r30 + 76));
}

loc_806FB4E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806FB500;
    }
}

loc_806FB4E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 164));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806FB4EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806FB4F8;
    }
}

loc_806FB4F0:
{
    MemoryInline::FlatWrite32((r30 + 68), r4);
    goto loc_806FB500;
}

loc_806FB4F8:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r30 + 68), r0);
}

loc_806FB500:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 108));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 168));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806FB510:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806FB51C;
    }
}

loc_806FB514:
{
    MemoryInline::FlatWriteFloat32((r30 + 72), f2.d);
    goto loc_806FB538;
}

loc_806FB51C:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_806FB520:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FB530;
    }
}

loc_806FB528:
{
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    goto loc_806FB538;
}

loc_806FB530:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
}

loc_806FB538:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 36));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001B gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x8000007F fpr_write=0x8000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806FB444 func_806FB444 preserves=false fpr_mask=0x80000000
