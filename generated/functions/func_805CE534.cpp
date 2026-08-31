#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805CE534(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r25 = ctx->gpr[25];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805CE534;

loc_805CE534:
{
}

loc_805CE538:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_805CE8F0;
    }
}

loc_805CE53C:
{
    r0 = MemoryInline::FlatRead16((r20 + 6));
}

loc_805CE544:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(9))) {
        goto loc_805CE8F0;
    }
}

loc_805CE548:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 262140);
    r3 = (r17 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 72));
}

loc_805CE558:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805CE8F0;
    }
}

loc_805CE55C:
{
    r0 = MemoryInline::FlatRead8((r3 + 164));
}

loc_805CE564:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805CE8F0;
    }
}

loc_805CE568:
{
    r0 = MemoryInline::FlatRead8((r3 + 165));
}

loc_805CE570:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805CE57C;
    }
}

loc_805CE574:
{
    r21 = (r21 + 16);
    goto loc_805CE8F0;
}

loc_805CE57C:
{
    r21 = (r3 + 104);
    goto loc_805CE8F0;
}

loc_805CE8DC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(32));
}

loc_805CE8E0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805CE8EC;
    }
}

loc_805CE8E4:
{
    r3 = MemoryInline::FlatRead32((r25 + 7136));
    ctx->lr = 0x805CE8ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[21] = r21;
    ctx->cr = cr;
    InvokeDirectCpu<0x805D00B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r17 = ctx->gpr[17];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r25 = ctx->gpr[25];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805CE8EC:
{
    r21 = (r21 + 2);
}

loc_805CE8F0:
{
    r4 = MemoryInline::FlatRead16(r21);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805CE8F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805CE8DC;
    }
}

loc_805CE8FC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[21] = r21;
    ctx->cr = cr;
    InvokeDirectCpu<0x805CDF28u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r17 = ctx->gpr[17];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r25 = ctx->gpr[25];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[21] = r21;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805CE534 func_805CE534 preserves=true fpr_mask=0x00000000
