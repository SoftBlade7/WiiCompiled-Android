#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805CE4CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r17_addr_0 = 0;
    uint32_t r17_addr_1 = 0;
    uint32_t r17_addr_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r25 = ctx->gpr[25];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805CE4CC;

loc_805CE4CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(0));
}

loc_805CE4D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805CE8F0;
    }
}

loc_805CE4D4:
{
    r0 = MemoryInline::FlatRead16((r20 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
}

loc_805CE4DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805CE8F0;
    }
}

loc_805CE4E0:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 262140);
}

loc_805CE4E8:
{
    r3 = 0x808C0000u;
    r17_addr_1 = (r17 + r0);
    r6 = MemoryInline::FlatRead32(r17_addr_1);
    r5 = (r3 + -31272);
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(16))) {
        goto loc_805CE500;
    }
}

loc_805CE4F8:
{
    r3 = 0x808C0000u;
    r5 = (r3 + -31336);
}

loc_805CE500:
{
    r0 = MemoryInline::FlatRead16((r20 + 8));
    r3 = (r1 + 48);
    r4 = 31;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
}

loc_805CE510:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805CE520;
    }
}

loc_805CE514:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r5_addr_1 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_1);
    goto loc_805CE524;
}

loc_805CE520:
{
    r5 = MemoryInline::FlatRead32(r5);
}

loc_805CE524:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x805CE52Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[21] = r21;
    ctx->cr = cr;
    InvokeDirectCpu<0x80017814u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r17 = ctx->gpr[17];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r25 = ctx->gpr[25];
    cr = ctx->cr;
    xer = ctx->xer;
    r21 = (r1 + 48);
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
    ctx->gpr[6] = r6;
    ctx->gpr[21] = r21;
    ctx->cr = cr;
    InvokeDirectCpu<0x805D00B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[21] = r21;
    ctx->cr = cr;
    InvokeDirectCpu<0x805CDF28u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r17 = ctx->gpr[17];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r25 = ctx->gpr[25];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[21] = r21;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805CE4CC func_805CE4CC preserves=true fpr_mask=0x00000000
