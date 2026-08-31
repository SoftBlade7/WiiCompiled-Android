#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80579FE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80579FE4;

loc_80579FE4:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 6656);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = 0x808B0000u;
    r30 = (r30 + 22768);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    r5 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057A028:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057A118;
    }
}

loc_8057A02C:
{
    r4 = MemoryInline::FlatRead16((r3 + 572));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 572), static_cast<uint16_t>(r0));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::FlatRead16((r30 + 692));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8057A044:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057A060;
    }
}

loc_8057A048:
{
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & -5);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_8057A118;
}

loc_8057A060:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057A06C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057A118;
    }
}

loc_8057A070:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057A078:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057A118;
    }
}

loc_8057A07C:
{
    // inline leaf 0x80590DC0 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 176));
    // end of inlined leaf 0x80590DC0
    f2.d = MemoryInline::FlatReadFloat32((r30 + 680));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_8057A090:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057A098;
    }
}

loc_8057A094:
{
    f31.d = f0.d;
}

loc_8057A098:
{
    r3 = MemoryInline::FlatRead16((r29 + 574));
    r4 = (r1 + 8);
    r0 = MemoryInline::FlatRead32((r30 + 684));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r29 + 574), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 3u>(ctx, r4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 80));
    f1.d = PpcFmulsInline(f0.d, PPC_PsToScalarInline(f1.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r30 + 688));
    r3 = r29;
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    f0.d = PpcFmulsInline(f31.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 576), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f2.d = MemoryInline::FlatReadFloat32((r3 + 228));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteFloat32((r3 + 228), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 232));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 232), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 236));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 236), f0.d);
}

loc_8057A118:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 68));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000003F gpr_write=0xE000003B gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80579FE4 func_80579FE4 preserves=false fpr_mask=0x80000000
