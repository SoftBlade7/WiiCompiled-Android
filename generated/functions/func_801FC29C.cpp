#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FC29C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801FC29C;

loc_801FC29C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FC2A8:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FC2B8;
    }
}

loc_801FC2B0:
{
    r3 = 10;
    goto loc_801FC33C;
}

loc_801FC2B8:
{
    r0 = MemoryInline::FlatRead32((r3 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FC2C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FC2CC;
    }
}

loc_801FC2C4:
{
    r3 = 10;
    goto loc_801FC33C;
}

loc_801FC2CC:
{
    r7 = MemoryInline::FlatRead32((r3 + 48));
    r0 = MemoryInline::FlatRead8((r7 + 6242));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(65));
}

loc_801FC2DC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801FC2E8;
    }
}

loc_801FC2E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(90));
}

loc_801FC2E4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801FC2F0;
    }
}

loc_801FC2E8:
{
    r3 = 35;
    goto loc_801FC33C;
}

loc_801FC2F0:
{
    r0 = MemoryInline::FlatRead8((r7 + 32));
    r7 = -1;
    r7 = PPC_Srw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
    r0 = (r7 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801FC304:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801FC310;
    }
}

loc_801FC308:
{
    r3 = 37;
    goto loc_801FC33C;
}

loc_801FC310:
{
    r0 = (0 - r5);
    r7 = r6;
    r0 = (r0 | r5);
    r8 = (r1 + 8);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & 1);
    r6 = 0;
    ctx->lr = 0x801FC32Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x801FBFE4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FC330:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FC338;
    }
}

loc_801FC334:
{
    goto loc_801FC33C;
}

loc_801FC338:
{
    r3 = 0;
}

loc_801FC33C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801FC29C func_801FC29C preserves=true fpr_mask=0x00000000
