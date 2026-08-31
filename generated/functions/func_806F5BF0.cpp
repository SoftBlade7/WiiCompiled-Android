#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F5BF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806F5BF0;

loc_806F5BF0:
{
    r6 = MemoryInline::FlatRead8((r3 + 16));
    r5 = 0x808C0000u;
    r4 = 0x808A0000u;
    f2.d = MemoryInline::FlatReadFloat32((r5 + 30676));
    r0 = (r6 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806F5C04:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 2912));
    r7 = 0;
    r5 = 0;
    ctr = r0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806F5C88;
    }
}

loc_806F5C18:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r4 = (r0 + r5);
    r5_addr_2 = (r5 + r0);
    r6 = MemoryInline::FlatRead32(r5_addr_2);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    f5.d = MemoryInline::FlatReadFloat32((r6 + 16));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f3.d = MemoryInline::FlatReadFloat32((r6 + 20));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 20));
    f5.d = MemoryInline::FlatReadFloat32((r6 + 24));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 24));
    f4.d = PpcFmulsInline(f4.d, f4.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f3.d = PpcFmulsInline(f6.d, f6.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f5.d = PpcFmulsInline(f5.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f4.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806F5C74:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806F5C80;
    }
}

loc_806F5C78:
{
    r7 = 1;
    goto loc_806F5C88;
}

loc_806F5C80:
{
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806F5C18;
    }
}

loc_806F5C88:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x0000007F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x806F5BF0 func_806F5BF0 preserves=true fpr_mask=0x00000000
