#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AC71C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AC71C;

loc_801AC71C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x802A0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r1 + 8);
    r3 = (r3 + -13776);
    ctx->lr = 0x801AC738u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019C3E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801AC73C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801AC754;
    }
}

loc_801AC740:
{
    r0 = MemoryInline::FlatRead8((r1 + 15));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(63));
}

loc_801AC748:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801AC754;
    }
}

loc_801AC74C:
{
    r3 = 1;
    goto loc_801AC7BC;
}

loc_801AC754:
{
}

loc_801AC758:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801AC784;
    }
}

loc_801AC75C:
{
    r0 = MemoryInline::FlatRead8((r1 + 15));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(63));
}

loc_801AC764:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AC784;
    }
}

loc_801AC768:
{
    r3 = 0x802A0000u;
    r3 = (r3 + -13776);
    ctx->lr = 0x801AC774u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019B64Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801AC778:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AC794;
    }
}

loc_801AC77C:
{
    r3 = 0;
    goto loc_801AC7BC;
}

loc_801AC784:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-12));
}

loc_801AC788:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AC794;
    }
}

loc_801AC78C:
{
    r3 = 0;
    goto loc_801AC7BC;
}

loc_801AC794:
{
    r3 = 0x802A0000u;
    r4 = 63;
    r3 = (r3 + -13776);
    r5 = 0;
    ctx->lr = 0x801AC7A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8019B4B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801AC7AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AC7B8;
    }
}

loc_801AC7B0:
{
    r3 = 0;
    goto loc_801AC7BC;
}

loc_801AC7B8:
{
    r3 = 1;
}

loc_801AC7BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801AC71C func_801AC71C preserves=true fpr_mask=0x00000000
