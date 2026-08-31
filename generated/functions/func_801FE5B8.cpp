#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FE5B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_801FE628_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801FE5B8;

loc_801FE5B8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FE5C4:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FE5D4;
    }
}

loc_801FE5CC:
{
    r3 = 10;
    goto loc_801FE640;
}

loc_801FE5D4:
{
}

loc_801FE5D8:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(2))) {
        goto loc_801FE5EC;
    }
}

loc_801FE5DC:
{
    r6 = MemoryInline::FlatRead32((r3 + 52));
    r0 = (r6 + 2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801FE5E8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801FE604;
    }
}

loc_801FE5EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801FE5F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FE604;
    }
}

loc_801FE5F4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_801FE5F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FE604;
    }
}

loc_801FE5FC:
{
    r3 = 14;
    goto loc_801FE640;
}

loc_801FE604:
{
    r6 = MemoryInline::FlatRead16(r3);
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r9 = (r9_rot_1 & -2);
    r7 = MemoryInline::FlatRead8((r3 + 32));
    r0 = (r1 + 8);
    r4 = (r6 + -1);
    r8 = MemoryInline::FlatRead32((r3 + 40));
    r6 = PPC_Srw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r7));
    r7 = 2;
    r6 = (r8 + r6);
    addr_801FE628_loc_0 = r0;
    PPC_StoreHalfwordByteReverse(addr_801FE628_loc_0, r5);
    r4 = (r9 & r4);
    r5 = (r6 & 65535);
    r6 = (r4 & 65535);
    r4 = (r1 + 8);
    ctx->lr = 0x801FE640u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x80204F68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801FE640:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801FE5B8 func_801FE5B8 preserves=true fpr_mask=0x00000000
