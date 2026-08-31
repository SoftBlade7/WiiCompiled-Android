#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80208B70_statefree(uint32_t);

extern "C" void func_801DB9B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DB9B0;

loc_801DB9B0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    ctx->lr = 0x801DB9C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208BFCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DB9CC:
{
    MemoryInline::FlatWrite32(r31, r3);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DBA2C;
    }
}

loc_801DB9D4:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80208B70u) && KnownTranslatedCpuCall<0x80208B70u>::kAvailable && !KnownTranslatedCpuCall<0x80208B70u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80208B70u>()) {
        const auto state_free_result_80208B70_665 = func_80208B70_statefree(r13);
        r3 = static_cast<uint32_t>(state_free_result_80208B70_665);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80208B70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r13 = ctx->gpr[13];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_801DB9DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DBA24;
    }
}

loc_801DB9E0:
{
    r3 = (r13 + -28280);
    ctx->lr = 0x801DB9E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208B74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-5));
}

loc_801DB9EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBA0C;
    }
}

loc_801DB9F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DBA00;
    }
}

loc_801DB9F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-15));
}

loc_801DB9F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DBA0C;
    }
}

loc_801DB9FC:
{
    goto loc_801DBA1C;
}

loc_801DBA00:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-3));
}

loc_801DBA04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DBA1C;
    }
}

loc_801DBA08:
{
    goto loc_801DBA14;
}

loc_801DBA0C:
{
    r3 = -46;
    goto loc_801DBA30;
}

loc_801DBA14:
{
    r3 = -38;
    goto loc_801DBA30;
}

loc_801DBA1C:
{
    r3 = -43;
    goto loc_801DBA30;
}

loc_801DBA24:
{
    r3 = -43;
    goto loc_801DBA30;
}

loc_801DBA2C:
{
    r3 = 0;
}

loc_801DBA30:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801DB9B0 func_801DB9B0 preserves=true fpr_mask=0x00000000
