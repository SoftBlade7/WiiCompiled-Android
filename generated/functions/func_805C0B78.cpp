#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805C0B78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805C0B78;

loc_805C0B78:
{
    r0 = MemoryInline::FlatRead32((r4 + 576));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805C0B80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C0BB0;
    }
}

loc_805C0B84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_805C0B88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C0BC0;
    }
}

loc_805C0B8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_805C0B90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C0BD0;
    }
}

loc_805C0B94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_805C0B98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C0BE0;
    }
}

loc_805C0B9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_805C0BA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C0BF0;
    }
}

loc_805C0BA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_805C0BA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805C0C00;
    }
}

loc_805C0BAC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805C0BB0:
{
    r4 = 5060;
    r5 = 0;
    r3 = (r3 + 4600);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807E9A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805C0BC0:
{
    r4 = 5061;
    r5 = 0;
    r3 = (r3 + 4600);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807E9A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805C0BD0:
{
    r4 = 5064;
    r5 = 0;
    r3 = (r3 + 4600);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807E9A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805C0BE0:
{
    r4 = 5063;
    r5 = 0;
    r3 = (r3 + 4600);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807E9A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805C0BF0:
{
    r4 = 0;
    r5 = 0;
    r3 = (r3 + 4600);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807E9A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

loc_805C0C00:
{
    r0 = MemoryInline::FlatRead32((r3 + 3980));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
}

loc_805C0C08:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805C0C7C;
    }
}

loc_805C0C0C:
{
    r4 = 0x808B0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r4 + 31184);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x805C0C24u:
        goto loc_805C0C24;
        break;
    case 0x805C0C2Cu:
        goto loc_805C0C2C;
        break;
    case 0x805C0C34u:
        goto loc_805C0C34;
        break;
    case 0x805C0C3Cu:
        goto loc_805C0C3C;
        break;
    case 0x805C0C44u:
        goto loc_805C0C44;
        break;
    case 0x805C0C4Cu:
        goto loc_805C0C4C;
        break;
    case 0x805C0C54u:
        goto loc_805C0C54;
        break;
    case 0x805C0C5Cu:
        goto loc_805C0C5C;
        break;
    case 0x805C0C64u:
        goto loc_805C0C64;
        break;
    case 0x805C0C6Cu:
        goto loc_805C0C6C;
        break;
    case 0x805C0C74u:
        goto loc_805C0C74;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_805C0C24:
{
    r4 = 6510;
    goto loc_805C0C80;
}

loc_805C0C2C:
{
    r4 = 6500;
    goto loc_805C0C80;
}

loc_805C0C34:
{
    r4 = 6501;
    goto loc_805C0C80;
}

loc_805C0C3C:
{
    r4 = 6502;
    goto loc_805C0C80;
}

loc_805C0C44:
{
    r4 = 6503;
    goto loc_805C0C80;
}

loc_805C0C4C:
{
    r4 = 6504;
    goto loc_805C0C80;
}

loc_805C0C54:
{
    r4 = 6505;
    goto loc_805C0C80;
}

loc_805C0C5C:
{
    r4 = 6506;
    goto loc_805C0C80;
}

loc_805C0C64:
{
    r4 = 6507;
    goto loc_805C0C80;
}

loc_805C0C6C:
{
    r4 = 6508;
    goto loc_805C0C80;
}

loc_805C0C74:
{
    r4 = 6509;
    goto loc_805C0C80;
}

loc_805C0C7C:
{
    r4 = 0;
}

loc_805C0C80:
{
    r5 = 0;
    r3 = (r3 + 4600);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807E9A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805C0B78 func_805C0B78 preserves=true fpr_mask=0x00000000
