#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801EAE04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801EAE04;

loc_801EAE04:
{
    MemoryInline::FlatWriteRam32((r1 + -336), r1);
    r1 = (r1 + -336);
    r0 = ctx->lr;
    r5 = 2;
    MemoryInline::FlatWriteRam32((r1 + 340), r0);
    r3 = (r1 + 168);
    MemoryInline::FlatWriteRam32((r1 + 332), r31);
    r31 = 0;
    r4 = MemoryInline::FlatRead32((r13 + -27976));
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    ctx->lr = 0x801EAE2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DAC68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EAE30:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EAE38;
    }
}

loc_801EAE34:
{
    goto loc_801EAF80;
}

loc_801EAE38:
{
    r3 = (r1 + 168);
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x801EAE48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB154u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EAE4C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EAE54;
    }
}

loc_801EAE50:
{
    goto loc_801EAE78;
}

loc_801EAE54:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
    r5 = (r1 + 168);
    r4 = 2048;
    r3 = (r3 + 13824);
    ctx->lr = 0x801EAE68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB344u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801EAE6C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_801EAE74;
    }
}

loc_801EAE70:
{
    r31 = r3;
}

loc_801EAE74:
{
    r3 = r31;
}

loc_801EAE78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EAE7C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EAE84;
    }
}

loc_801EAE80:
{
    goto loc_801EAF80;
}

loc_801EAE84:
{
    r3 = (r1 + 168);
    r4 = (r1 + 8);
    ctx->lr = 0x801EAE90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB6ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EAE94:
{
    r31 = r3;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EAF6C;
    }
}

loc_801EAE9C:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
}

loc_801EAEA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801EAEB0;
    }
}

loc_801EAEA8:
{
    r31 = (r3 + 13824);
    goto loc_801EAEB4;
}

loc_801EAEB0:
{
    r31 = 0;
}

loc_801EAEB4:
{
    r0 = MemoryInline::FlatRead16((r31 + 20));
}

loc_801EAEBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EAF40;
    }
}

loc_801EAEC0:
{
    r0 = MemoryInline::FlatRead16((r31 + 16));
}

loc_801EAEC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801EAF40;
    }
}

loc_801EAECC:
{
    MemoryInline::FlatWrite16((r31 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(32));
}

loc_801EAED8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801EAEE4;
    }
}

loc_801EAEDC:
{
    r0 = 32;
    MemoryInline::FlatWrite16((r31 + 16), static_cast<uint16_t>(r0));
}

loc_801EAEE4:
{
    r4 = MemoryInline::FlatRead32((r13 + -27976));
    r3 = (r1 + 12);
    r5 = 4;
    ctx->lr = 0x801EAEF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DAC68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EAEF8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EAF40;
    }
}

loc_801EAEFC:
{
    r3 = (r1 + 12);
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x801EAF0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB154u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EAF10:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EAF38;
    }
}

loc_801EAF14:
{
    r3 = MemoryInline::FlatRead32((r13 + -24384));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801EAF1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EAF28;
    }
}

loc_801EAF20:
{
    r3 = (r3 + 13824);
    goto loc_801EAF2C;
}

loc_801EAF28:
{
    r3 = 0;
}

loc_801EAF2C:
{
    r5 = (r1 + 12);
    r4 = 2048;
    ctx->lr = 0x801EAF38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB514u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801EAF38:
{
    r3 = (r1 + 12);
    ctx->lr = 0x801EAF40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DAFBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801EAF40:
{
    r3 = MemoryInline::FlatRead16((r31 + 20));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_801EAF48:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EAF60;
    }
}

loc_801EAF4C:
{
    r0 = MemoryInline::FlatRead16((r31 + 18));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801EAF54:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801EAF60;
    }
}

loc_801EAF58:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801EAF5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EAF68;
    }
}

loc_801EAF60:
{
    r31 = -14;
    goto loc_801EAF6C;
}

loc_801EAF68:
{
    r31 = 0;
}

loc_801EAF6C:
{
    r3 = (r1 + 168);
    ctx->lr = 0x801EAF74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DAFBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801EAF78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801EAF80;
    }
}

loc_801EAF7C:
{
    r3 = r31;
}

loc_801EAF80:
{
    r0 = MemoryInline::FlatRead32((r1 + 340));
    r31 = MemoryInline::FlatRead32((r1 + 332));
    ctx->lr = r0;
    r1 = (r1 + 336);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801EAE04 func_801EAE04 preserves=true fpr_mask=0x00000000
