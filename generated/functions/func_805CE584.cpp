#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805CE584(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r29 = ctx->gpr[29];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805CE584;

loc_805CE584:
{
}

loc_805CE588:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_805CE8F0;
    }
}

loc_805CE58C:
{
    r0 = MemoryInline::FlatRead16((r20 + 6));
}

loc_805CE594:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(9))) {
        goto loc_805CE8F0;
    }
}

loc_805CE598:
{
    r5 = (r17 + r0);
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead8((r5 + 108));
    r0 = (r29 + -29504);
    r4 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = (r5 * r0);
    r3 = MemoryInline::FlatRead32((r4 + 20));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 + -1380646912);
}

loc_805CE5C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20548))) {
        goto loc_805CE8F0;
    }
}

loc_805CE5C8:
{
    r0 = (r29 + -27664);
    r0 = (r5 * r0);
    r0 = (r4 + r0);
    r4 = (r0 + 56);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0)) + static_cast<uint64_t>(static_cast<uint32_t>(56)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805CE5D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805CE8F0;
    }
}

loc_805CE5DC:
{
    r3 = 0x809C0000u;
    r5 = (r4 + 22);
    r3 = MemoryInline::FlatRead32((r3 + 7144));
    r4 = 0;
    ctx->lr = 0x805CE5F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[21] = r21;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805FA6E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r17 = ctx->gpr[17];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r25 = ctx->gpr[25];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 7144));
    // inline leaf 0x805FA930 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x805FA930
}

loc_805CE604:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805CE8F0;
    }
}

loc_805CE608:
{
    r0 = MemoryInline::FlatRead8((r3 + 164));
}

loc_805CE610:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805CE8F0;
    }
}

loc_805CE614:
{
    r0 = MemoryInline::FlatRead8((r3 + 165));
}

loc_805CE61C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805CE628;
    }
}

loc_805CE620:
{
    r21 = (r21 + 30);
    goto loc_805CE8F0;
}

loc_805CE628:
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
    ctx->gpr[5] = r5;
    ctx->gpr[21] = r21;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805D00B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r17 = ctx->gpr[17];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r25 = ctx->gpr[25];
    r29 = ctx->gpr[29];
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
    ctx->gpr[5] = r5;
    ctx->gpr[21] = r21;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805CDF28u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r17 = ctx->gpr[17];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r25 = ctx->gpr[25];
    r29 = ctx->gpr[29];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[21] = r21;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805CE584 func_805CE584 preserves=true fpr_mask=0x00000000
