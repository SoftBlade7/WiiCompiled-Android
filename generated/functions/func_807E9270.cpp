#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_807E9270(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;

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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807E9270;

loc_807E9270:
{
    MemoryInline::FlatWriteRam32((r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    MemoryInline::FlatWriteRam32((r1 + 236), r31);
    r31 = 0x808B0000u;
    r31 = (r31 + -29208);
    MemoryInline::FlatWriteRam32((r1 + 232), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 228), r29);
    r0 = MemoryInline::FlatRead32((r3 + 596));
}

loc_807E929C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807E933C;
    }
}

loc_807E92A0:
{
    r4 = MemoryInline::FlatRead32((r3 + 100));
    r0 = MemoryInline::FlatRead32((r3 + 580));
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r4 = MemoryInline::FlatRead32((r4 + 56));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r29 = (r0 & r4);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_748 = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_748[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_748[1]);
    } else {
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
        ctx->cr = cr;
        InvokeDirectCpu<0x805CD94Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r29 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807E92C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807E92D4;
    }
}

loc_807E92C8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 128), r0);
    goto loc_807E932C;
}

loc_807E92D4:
{
    r0 = (r29 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807E92D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807E92E8;
    }
}

loc_807E92DC:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 128), r0);
    goto loc_807E932C;
}

loc_807E92E8:
{
    r0 = (r29 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807E92EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807E92FC;
    }
}

loc_807E92F0:
{
    r0 = 2;
    MemoryInline::FlatWriteRam32((r1 + 128), r0);
    goto loc_807E932C;
}

loc_807E92FC:
{
    r0 = (r29 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807E9300:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807E9310;
    }
}

loc_807E9304:
{
    r0 = 3;
    MemoryInline::FlatWriteRam32((r1 + 128), r0);
    goto loc_807E932C;
}

loc_807E9310:
{
    r0 = (r29 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807E9314:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807E9324;
    }
}

loc_807E9318:
{
    r0 = 4;
    MemoryInline::FlatWriteRam32((r1 + 128), r0);
    goto loc_807E932C;
}

loc_807E9324:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 128), r0);
}

loc_807E932C:
{
    r4 = MemoryInline::FlatRead32((r30 + 596));
    r3 = r30;
    r5 = (r1 + 8);
    ctx->lr = 0x807E933Cu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DDB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807E933C:
{
    r0 = MemoryInline::FlatRead32((r30 + 600));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807E9344:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807E939C;
    }
}

loc_807E9348:
{
    f2.d = MemoryInline::FlatReadFloat32((r30 + 604));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_807E9354:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807E9394;
    }
}

loc_807E935C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = MemoryInline::FlatRead32((r30 + 608));
    f2.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f2.d = std::fabs(f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f1.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite8((r3 + 184), static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 604));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 604), f0.d);
    goto loc_807E939C;
}

loc_807E9394:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 128), static_cast<uint8_t>(r0));
}

loc_807E939C:
{
    r0 = MemoryInline::FlatRead32((r1 + 244));
    r31 = MemoryInline::FlatRead32((r1 + 236));
    r30 = MemoryInline::FlatRead32((r1 + 232));
    r29 = MemoryInline::FlatRead32((r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 240);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFBF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807E9270 func_807E9270 preserves=true fpr_mask=0x00000000
