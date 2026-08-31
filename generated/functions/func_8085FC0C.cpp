#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_805CD94C_statefree(uint32_t);

extern "C" void func_8085FC0C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8085FC0C;

loc_8085FC0C:
{
    MemoryInline::FlatWriteRam32((r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 220), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 216), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 212), r29);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x805CD94Cu) && KnownTranslatedCpuCall<0x805CD94Cu>::kAvailable && !KnownTranslatedCpuCall<0x805CD94Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x805CD94Cu>()) {
        const auto state_free_result_805CD94C_503 = func_805CD94C_statefree(r3);
        r0 = static_cast<uint32_t>(state_free_result_805CD94C_503[0]);
        r4 = static_cast<uint32_t>(state_free_result_805CD94C_503[1]);
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8085FC44:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_8085FC64;
    }
}

loc_8085FC48:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r3 = (r3 + 56);
    goto loc_8085FC68;
}

loc_8085FC64:
{
    r3 = 0;
}

loc_8085FC68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8085FC6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085FC8C;
    }
}

loc_8085FC70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(1));
}

loc_8085FC74:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085FC9C;
    }
}

loc_8085FC78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_8085FC7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085FCB4;
    }
}

loc_8085FC80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(3));
}

loc_8085FC84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8085FCC4;
    }
}

loc_8085FC88:
{
    goto loc_8085FCD8;
}

loc_8085FC8C:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r3 + -28648));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    goto loc_8085FCD8;
}

loc_8085FC9C:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -28036));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead32((r3 + -28032));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    goto loc_8085FCD8;
}

loc_8085FCB4:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r3 + -28640));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    goto loc_8085FCD8;
}

loc_8085FCC4:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -28028));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead32((r3 + -28024));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
}

loc_8085FCD8:
{
    r29 = 0x808B0000u;
    r3 = r31;
    r29 = (r29 + -3160);
    r5 = (r30 + 8224);
    r4 = (r29 + 102);
    r6 = 0;
    ctx->lr = 0x8085FCF4u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r31;
    r4 = (r29 + 112);
    r5 = (r30 + 8274);
    r6 = (r1 + 8);
    ctx->lr = 0x8085FD08u;
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
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 228));
    r31 = MemoryInline::FlatRead32((r1 + 220));
    r30 = MemoryInline::FlatRead32((r1 + 216));
    r29 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 224);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFBF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8085FC0C func_8085FC0C preserves=true fpr_mask=0x00000000
