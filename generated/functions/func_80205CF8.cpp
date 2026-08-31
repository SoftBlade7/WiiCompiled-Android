#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80205CF8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80205CF8;

loc_80205CF8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80205D04:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80205D1C;
    }
}

loc_80205D14:
{
    r3 = 10;
    goto loc_80205EA0;
}

loc_80205D1C:
{
    ctx->lr = 0x80205D20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F0218u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80205D24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80205DF4;
    }
}

loc_80205D28:
{
    r3 = r31;
    ctx->lr = 0x80205D30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F0244u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_80205D34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80205E7C;
    }
}

loc_80205D38:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80205D40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80205DA4;
    }
}

loc_80205D44:
{
    r3 = r31;
    ctx->lr = 0x80205D4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80201328u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r31;
    ctx->lr = 0x80205D54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F6B40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F6188u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x80205D68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F056Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80205D6C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80205D90;
    }
}

loc_80205D70:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 2);
}

loc_80205D78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80205D84;
    }
}

loc_80205D7C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 5632), r0);
}

loc_80205D84:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite16((r31 + 6240), static_cast<uint16_t>(r0));
}

loc_80205D90:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
}

loc_80205DA4:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80205DAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80205DE4;
    }
}

loc_80205DB0:
{
    r3 = r31;
    ctx->lr = 0x80205DB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80205758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80205DBC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80205DC4;
    }
}

loc_80205DC0:
{
    goto loc_80205DE8;
}

loc_80205DC4:
{
    r0 = MemoryInline::FlatRead16((r31 + 6244));
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    r0 = (r0 & 65528);
    MemoryInline::FlatWrite16((r31 + 6244), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
}

loc_80205DE4:
{
    r3 = 0;
}

loc_80205DE8:
{
}

loc_80205DEC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80205E7C;
    }
}

loc_80205DF0:
{
    goto loc_80205E80;
}

loc_80205DF4:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80205DFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80205E7C;
    }
}

loc_80205E00:
{
    r3 = r31;
    ctx->lr = 0x80205E08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F0244u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80205E0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80205E70;
    }
}

loc_80205E10:
{
    r3 = r31;
    ctx->lr = 0x80205E18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80201328u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r31;
    ctx->lr = 0x80205E20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F6B40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F6188u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x80205E34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F056Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80205E38:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80205E5C;
    }
}

loc_80205E3C:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 2);
}

loc_80205E44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80205E50;
    }
}

loc_80205E48:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 5632), r0);
}

loc_80205E50:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite16((r31 + 6240), static_cast<uint16_t>(r0));
}

loc_80205E5C:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    r3 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r4 + 16), r0);
}

loc_80205E70:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & -3);
    MemoryInline::FlatWrite16((r31 + 6240), static_cast<uint16_t>(r0));
}

loc_80205E7C:
{
    r3 = 0;
}

loc_80205E80:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80205E84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80205E8C;
    }
}

loc_80205E88:
{
    goto loc_80205EA0;
}

loc_80205E8C:
{
    r3 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = 9;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r3 = (r3_rot_1 & 1);
    r3 = (0 - r3);
    r3 = (r0 & ~r3);
}

loc_80205EA0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80205CF8 func_80205CF8 preserves=true fpr_mask=0x00000000
