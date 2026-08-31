#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016F640(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8016F640;

loc_8016F640:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -26800));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r0 = (r31 + -1);
    r4 = (r3 & 511);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & -256);
    r3 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_8016F674:
{
    r3 = (r3 + 1);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(128))) {
        goto loc_8016F6A8;
    }
}

loc_8016F67C:
{
}

loc_8016F680:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(256))) {
        goto loc_8016F6A8;
    }
}

loc_8016F684:
{
    goto loc_8016F68C;
}

loc_8016F688:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r4 = (r4_rot_2 & 2147483647);
}

loc_8016F68C:
{
    r0 = (r4 & 1);
}

loc_8016F690:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016F688;
    }
}

loc_8016F694:
{
    r0 = PPC_Divwu(static_cast<uint32_t>(r31), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r31 - r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8016F6A8;
    }
}

loc_8016F6A4:
{
    r3 = (r3 + 1);
}

loc_8016F6A8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1024));
}

loc_8016F6AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8016F6B4;
    }
}

loc_8016F6B0:
{
    r3 = 1024;
}

loc_8016F6B4:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001F gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8016F640 func_8016F640 preserves=true fpr_mask=0x00000000
