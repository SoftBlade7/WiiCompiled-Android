#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020AAC8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8020AAC8;

loc_8020AAC8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->lr = 0x8020AAE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80206390u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8020AAE4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8020AB48;
    }
}

loc_8020AAE8:
{
    r0 = MemoryInline::FlatRead32((r13 + -24224));
}

loc_8020AAF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8020AB04;
    }
}

loc_8020AAF4:
{
    r6 = MemoryInline::FlatRead32((r13 + -24208));
}

loc_8020AAFC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8020AB04;
    }
}

loc_8020AB00:
{
    goto loc_8020AB08;
}

loc_8020AB04:
{
    r6 = 0;
}

loc_8020AB08:
{
    r0 = (r0 * 320);
    r5 = (r6 + r0);
    goto loc_8020AB40;
}

loc_8020AB14:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_8020AB1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8020AB3C;
    }
}

loc_8020AB20:
{
    r4 = MemoryInline::FlatRead8((r6 + 20));
    r0 = MemoryInline::FlatRead8((r3 + 6242));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8020AB34:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_8020AB3C;
    }
}

loc_8020AB38:
{
    goto loc_8020AB4C;
}

loc_8020AB3C:
{
    r6 = (r6 + 320);
}

loc_8020AB40:
{
}

loc_8020AB44:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r5))) {
        goto loc_8020AB14;
    }
}

loc_8020AB48:
{
    r6 = 0;
}

loc_8020AB4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8020AB50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020AB68;
    }
}

loc_8020AB54:
{
    r3 = MemoryInline::FlatRead32((r6 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020AB5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020AB68;
    }
}

loc_8020AB60:
{
    r4 = 0;
    ctx->lr = 0x8020AB68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8020C380u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8020AB68:
{
    r3 = r31;
    ctx->lr = 0x8020AB70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80207C1Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020AB74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020AB80;
    }
}

loc_8020AB78:
{
    r3 = 0;
    goto loc_8020AB84;
}

loc_8020AB80:
{
    ctx->lr = 0x8020AB84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x802079F8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8020AB84:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8020AAC8 func_8020AAC8 preserves=true fpr_mask=0x00000000
