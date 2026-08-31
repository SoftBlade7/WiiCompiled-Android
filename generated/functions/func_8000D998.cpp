#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_8000EF64_statefree(uint32_t, PPC_FPR);

extern "C" void func_8000D998(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8000D998;

loc_8000D998:
{
    MemoryInline::FlatWriteRam32((r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 136), f31.d);
    f31.d = f1.d;
    MemoryInline::FlatWriteRam32((r1 + 132), r31);
    MemoryInline::FlatWriteRam32((r1 + 128), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 124), r29);
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x8000EF64u) && KnownTranslatedCpuCall<0x8000EF64u>::kAvailable && !KnownTranslatedCpuCall<0x8000EF64u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8000EF64u>()) {
        const auto state_free_result_8000EF64_5E7 = func_8000EF64_statefree(r1, f1);
        r1 = static_cast<uint32_t>(state_free_result_8000EF64_5E7[0]);
        r3 = static_cast<uint32_t>(state_free_result_8000EF64_5E7[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8000EF64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    f0.d = MemoryInline::FlatReadFloat64((r2 + -32624));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_8000D9D0:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000D9F8;
    }
}

loc_8000D9DC:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r3));
    goto loc_8000DADC;
}

loc_8000D9F8:
{
    f1.d = f31.d;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000EF7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8000DA04:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8000DA3C;
    }
}

loc_8000DA08:
{
    f1.d = f31.d;
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r30 + 4), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000EF7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8000DA28:
{
    r0 = 73;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000DA34;
    }
}

loc_8000DA30:
{
    r0 = 78;
}

loc_8000DA34:
{
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    goto loc_8000DADC;
}

loc_8000DA3C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8000DA40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000DA48;
    }
}

loc_8000DA44:
{
    f31.d = (-(f31.d));
}

loc_8000DA48:
{
    f1.d = f31.d;
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B7A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f1.d);
    f31.d = f1.d;
    r4 = MemoryInline::FlatRead32((r1 + 20));
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8000DA6C:
{
    r0 = (r0 & ~r4);
    r3 = (r3 | 1048576);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4 = (32 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000DA94;
    }
}

loc_8000DA80:
{
    r0 = (r3 + -1);
    r0 = (r0 & ~r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3 = (32 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    r4 = (r3 + 32);
}

loc_8000DA94:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r29 = (53 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(53) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3 = (r1 + 24);
    r4 = (r0 - r29);
    ctx->lr = 0x8000DAA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000CF2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f1.d = f31.d;
    r3 = r29;
    ctx->lr = 0x8000DAB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B830u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80021B00u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = r3;
    r6 = r4;
    r3 = (r1 + 68);
    ctx->lr = 0x8000DAC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000CADCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r30;
    r4 = (r1 + 68);
    r5 = (r1 + 24);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000CBB8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r31));
}

loc_8000DADC:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 136));
    r31 = MemoryInline::FlatRead32((r1 + 132));
    r30 = MemoryInline::FlatRead32((r1 + 128));
    r29 = MemoryInline::FlatRead32((r1 + 124));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE0001FFF gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8000D998 func_8000D998 preserves=false fpr_mask=0x80000000
