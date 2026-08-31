#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80831D20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80831D20;

loc_80831D20:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_80831D2C:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80831D4C;
    }
}

loc_80831D3C:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -13920);
    r3 = (r3 + 25);
    goto loc_80831E08;
}

loc_80831D4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(18));
}

loc_80831D50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80831D64;
    }
}

loc_80831D54:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -13920);
    r3 = (r3 + 29);
    goto loc_80831E08;
}

loc_80831D64:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081CB70u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80831D6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80831D84;
    }
}

loc_80831D70:
{
}

loc_80831D74:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80831D94;
    }
}

loc_80831D78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_80831D7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80831DCC;
    }
}

loc_80831D80:
{
    goto loc_80831E04;
}

loc_80831D84:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -13920);
    r3 = (r3 + 34);
    goto loc_80831E08;
}

loc_80831D94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(22));
}

loc_80831D98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80831DAC;
    }
}

loc_80831D9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(31));
}

loc_80831DA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80831DAC;
    }
}

loc_80831DA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(34));
}

loc_80831DA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80831DBC;
    }
}

loc_80831DAC:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -13920);
    r3 = (r3 + 43);
    goto loc_80831E08;
}

loc_80831DBC:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -13920);
    r3 = (r3 + 51);
    goto loc_80831E08;
}

loc_80831DCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(26));
}

loc_80831DD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80831DE4;
    }
}

loc_80831DD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(29));
}

loc_80831DD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80831DE4;
    }
}

loc_80831DDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(35));
}

loc_80831DE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80831DF4;
    }
}

loc_80831DE4:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -13920);
    r3 = (r3 + 60);
    goto loc_80831E08;
}

loc_80831DF4:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -13920);
    r3 = (r3 + 68);
    goto loc_80831E08;
}

loc_80831E04:
{
    r3 = 0;
}

loc_80831E08:
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

// RECOMP_GUEST_ABI gpr_read=0x8000007B gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80831D20 func_80831D20 preserves=true fpr_mask=0x00000000
