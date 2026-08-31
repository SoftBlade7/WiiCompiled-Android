#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_8085FD24(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8085FD24;

loc_8085FD24:
{
    MemoryInline::FlatWriteRam32((r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 236), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 232), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 228), r29);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_560 = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_560[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_560[1]);
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
        ctx->cr = cr;
        InvokeDirectCpu<0x805CD94Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8085FD5C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8085FD7C;
    }
}

loc_8085FD60:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_8085FD80;
}

loc_8085FD7C:
{
    r3 = 0;
}

loc_8085FD80:
{
}

loc_8085FD84:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8085FDB4;
    }
}

loc_8085FD88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(1));
}

loc_8085FD8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085FDD8;
    }
}

loc_8085FD90:
{
}

loc_8085FD94:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(2))) {
        goto loc_8085FDF0;
    }
}

loc_8085FD98:
{
}

loc_8085FD9C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(3))) {
        goto loc_8085FE14;
    }
}

loc_8085FDA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(4));
}

loc_8085FDA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085FE38;
    }
}

loc_8085FDA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(5));
}

loc_8085FDAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085FE50;
    }
}

loc_8085FDB0:
{
    goto loc_8085FE74;
}

loc_8085FDB4:
{
    r4 = (r3 + 65536);
    r3 = 131072;
    r4 = MemoryInline::FlatRead32((r4 + -27976));
    r0 = (r3 + -31073);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8085FDC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8085FDD0;
    }
}

loc_8085FDCC:
{
    r0 = r4;
}

loc_8085FDD0:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    goto loc_8085FE74;
}

loc_8085FDD8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80549810u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 208), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    goto loc_8085FE74;
}

loc_8085FDF0:
{
    r4 = (r3 + 65536);
    r3 = 131072;
    r4 = MemoryInline::FlatRead32((r4 + -27988));
    r0 = (r3 + -31073);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8085FE04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8085FE0C;
    }
}

loc_8085FE08:
{
    r0 = r4;
}

loc_8085FE0C:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    goto loc_8085FE74;
}

loc_8085FE14:
{
    r4 = (r3 + 65536);
    r3 = 131072;
    r4 = MemoryInline::FlatRead32((r4 + -27984));
    r0 = (r3 + -31073);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8085FE28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8085FE30;
    }
}

loc_8085FE2C:
{
    r0 = r4;
}

loc_8085FE30:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    goto loc_8085FE74;
}

loc_8085FE38:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -28020));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead32((r3 + -28016));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    goto loc_8085FE74;
}

loc_8085FE50:
{
    r4 = (r3 + 65536);
    r3 = 65536;
    r4 = MemoryInline::FlatRead16((r4 + -27960));
    r0 = (r3 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(65535));
}

loc_8085FE64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8085FE6C;
    }
}

loc_8085FE68:
{
    r0 = r4;
}

loc_8085FE6C:
{
    r0 = (r0 & 65535);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
}

loc_8085FE74:
{
    r29 = 0x808B0000u;
    r3 = r31;
    r29 = (r29 + -3160);
    r5 = (r30 + 8228);
    r4 = (r29 + 118);
    r6 = 0;
    ctx->lr = 0x8085FE90u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DCBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    r4 = (r29 + 128);
    r5 = (r30 + 8278);
    r6 = (r1 + 8);
    ctx->lr = 0x8085FEA4u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8063DCBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
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
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFBF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8085FD24 func_8085FD24 preserves=true fpr_mask=0x00000000
