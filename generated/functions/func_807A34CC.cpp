#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A34CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807A34CC;

loc_807A34CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 124));
    r4 = r3;
    r0 = (r0 & 8);
}

loc_807A34D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807A34E4;
    }
}

loc_807A34DC:
{
    r6 = (r3 + 140);
    goto loc_807A34E8;
}

loc_807A34E4:
{
    r6 = MemoryInline::FlatRead32((r3 + 152));
}

loc_807A34E8:
{
    r0 = (r4 + 68);
    r5 = 0x808A0000u;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_807A34F4:
{
    r5 = (r5 + 21156);
    r3 = (r5 + 103);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A3508;
    }
}

loc_807A3500:
{
    r4 = (r5 + 127);
    goto loc_807A3530;
}

loc_807A3508:
{
    r0 = (r4 + 128);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_807A3510:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A351C;
    }
}

loc_807A3514:
{
    r4 = (r5 + 132);
    goto loc_807A3530;
}

loc_807A351C:
{
    r0 = (r4 + 140);
    r4 = (r5 + 142);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_807A3528:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A3530;
    }
}

loc_807A352C:
{
    r4 = (r5 + 137);
}

loc_807A3530:
{
    f1.d = MemoryInline::FlatReadFloat32(r6);
    f2.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r6 + 8));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x807DE640u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFF1 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807A34CC func_807A34CC preserves=true fpr_mask=0x00000000
