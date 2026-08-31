#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800770D0(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_800770D0;

loc_800770D0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -32376));
    ctx->lr = 0x800770ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A0504u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_800770F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800770FC;
    }
}

loc_800770F4:
{
    ctx->lr = 0x800770F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800B1790u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80077100;
}

loc_800770FC:
{
    ctx->lr = 0x80077100u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800B17F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80077100:
{
    r3 = 4;
    r3 = (r3 | 262144);
    ctx->gqr[2] = r3;
    r3 = 5;
    r3 = (r3 | 327680);
    ctx->gqr[3] = r3;
    r3 = 6;
    r3 = (r3 | 393216);
    ctx->gqr[4] = r3;
    r3 = 7;
    r3 = (r3 | 458752);
    ctx->gqr[5] = r3;
    r4 = 84344832;
    r0 = (r4 + 1287);
    ctx->gqr[6] = r0;
    r4 = 134676480;
    r0 = (r4 + 2055);
    ctx->gqr[7] = r0;
    ctx->lr = 0x8007714Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801BACD8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80077150:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80077170;
    }
}

loc_80077154:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_80077158:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8007717C;
    }
}

loc_8007715C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
}

loc_80077160:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80077188;
    }
}

loc_80077164:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
}

loc_80077168:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80077194;
    }
}

loc_8007716C:
{
    goto loc_800771A0;
}

loc_80077170:
{
    r3 = 0x80290000u;
    r3 = (r3 + -23992);
    goto loc_800771A8;
}

loc_8007717C:
{
    r3 = 0x80290000u;
    r3 = (r3 + -23812);
    goto loc_800771A8;
}

loc_80077188:
{
    r3 = 0x80290000u;
    r3 = (r3 + -23752);
    goto loc_800771A8;
}

loc_80077194:
{
    r3 = 0x80290000u;
    r3 = (r3 + -23872);
    goto loc_800771A8;
}

loc_800771A0:
{
    r3 = 0x80290000u;
    r3 = (r3 + -23992);
}

loc_800771A8:
{
    ctx->lr = 0x800771ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80064240u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
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
// RECOMP_REGISTRATION base 0x800770D0 func_800770D0 preserves=true fpr_mask=0x00000000
